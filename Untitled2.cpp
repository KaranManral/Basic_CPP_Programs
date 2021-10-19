#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Shapes {
    protected : 
                static float PI;
                virtual void calArea()=0; //pure virtual functions
                virtual void printArea()=0;
};

float Shapes :: PI=3.14159265359; //initialization of static member PI
//--------------------------------------------------------------------------------------------
class TwoDim : public Shapes {
    protected : 
                float area;
                float lenA, lenB, lenC, radius;
                string shape;
                virtual void calArea()=0;
                virtual void printArea()=0;
};
//-------------------------------------------------------------------------------------------
class ThreeDim : public Shapes {
    protected : 
                float curvedarea, totalarea;
                float length, breadth, height, radius, slantheight;
                string shape;
                virtual void calArea()=0;
                virtual void printArea()=0;
};
//----------------------------------------------------------------------------------------------
class Triangle : public TwoDim {
    void calArea();
    bool is_righttriangle(float a,float b,float c);
    public :
             Triangle ();
             Triangle (float b,float h);
             Triangle (float a,float b,float c);
             void printArea ();
};

//-----------------------------------------------------------------------------------------------------
void Triangle :: calArea () {
    if (is_righttriangle(lenA,lenB,lenC))
    {
        float hypotenuse=lenA, base=lenB, altitude=lenC;
        if (lenB>lenA) 
        {
            hypotenuse=lenB;
            base = lenC;
            altitude = lenA;
        }
        if (lenC>lenA) 
        {
            hypotenuse=lenC;
            base = lenA;
            altitude = lenB;
        }

        area = (base * altitude)/2;        
    }
    else
    {
        float s=(static_cast<float>(lenA)+lenB+lenC)/2; //half perimeter
//        float ar=sqrt(s*(s-lenA)(s-lenB)(s-lenC));
//        area=ar;
    }         

    return; 
}

bool Triangle :: is_righttriangle (float a,float b,float c) {
    if (a<=0||b<=0||c<=0)  return 0;
    float hypotenuse=a, base=b, altitude=c;
        if (b>a) 
        {
            hypotenuse=b;
            base = c;
            altitude = a;
        }
        if (c>a) 
        {
            hypotenuse=c;
            base = a;
            altitude = b;
        }
    
    if (hypotenuse==sqrt(base*base+altitude*altitude))  return 1;
    else return 0;
}//is_righttriangle func

Triangle :: Triangle () {
    lenA=1; lenB=1; lenC=1;
    shape = "Triangle";
    calArea ();
}

Triangle :: Triangle (float b,float h) {
    lenA=b; lenB=h; lenC=0;     
    shape="Triangle";
    calArea();
}

Triangle :: Triangle (float a,float b,float c) {
    lenA=a; lenB=b; lenC=c;
    shape="Triangle";
    calArea();
}

void Triangle :: printArea () {
    cout << "\nThe area of the triangle is "<<area<<" sq units.";
    return;
}

//-------------------------------------------------------------------------------------------
class Rectangle : public TwoDim {
    void calArea();
    public : 
             Rectangle ();
             Rectangle (float a);
             Rectangle (float a,float b);
             virtual void printArea();
}; 

void Rectangle :: calArea () {
    area=lenA*lenB;
    return;
}

Rectangle :: Rectangle () {
    lenA=1;  lenB=1;
    shape="Rectangle";
    calArea();
}

Rectangle :: Rectangle (float a) {
    lenA=a;  lenB=a;
    shape="Square";
    calArea();
}

Rectangle :: Rectangle (float a,float b) {
    lenA=a;   lenB=b;
    if (a==b)
    shape="Square";
    else
    shape="Rectangle";
    calArea();
}

void Rectangle :: printArea () {
    cout << "\nThe area of "<<shape<<" with sides "<<lenA<<" x "<<lenB<<" units each is "<<area<<" sq units.";
    return;
}
//-------------------------------------------------------------------------------------------
class Circle : public TwoDim {
    void calArea();
    public : 
             Circle ();
             Circle (float r);
             virtual void printArea();
};

//------------------------------------------------------------------------------------------

void Circle :: calArea () {
    area=PI*radius*radius;
    return;
}

Circle :: Circle () {
    radius=1;
    shape="Circle";
    calArea();
}

Circle :: Circle (float r) {
    radius=r;
    shape="Circle";
    calArea();
}

void Circle :: printArea () {
    cout << "\nThe area of circle with radius = "<<radius<<" units is "<<area<<" sq units.";
    return;
}

//------------------------------------------------------------------------------------------

class Cone : public ThreeDim {
    void calArea();
    public :
             Cone();
             Cone(float r,float h,float l);//r==radius,h==height,l==slant height
             virtual void printArea();
};

//--------------------------------------------------------------------------------------

void Cone :: calArea() {
    if ((slantheight==0&&height==0)||radius==0)
    {
        cout << "\nError 20: No figure possible.";
        exit(20);
    }

    if (radius!=0&&height!=0&&slantheight!=0)
    {
        if (slantheight!=sqrt(radius*radius+height*height))
        cout << "Error 20 : No figure possible.";
        exit(20);
    }    
    
    if (slantheight==0)
    {
        slantheight=sqrt((height*height)+(radius*radius));
    }
    curvedarea=PI*radius*slantheight;
    totalarea=PI*radius*(radius+slantheight);
    return;
}

Cone :: Cone () {
    radius=1;  slantheight=1;
    shape="Cone";
    calArea();        
}

Cone :: Cone (float r,float h, float l) {
    radius=r; height=h; slantheight=l;
    shape="Cone";
    calArea();
}

void Cone :: printArea() {
    cout << "\nThe curved surface area of the cone is "<<curvedarea<<" sq units and total suface area  is "<<totalarea<<" sq units.";
    return;
}
//---------------------------------------------------------------------------------------------------------------------------------------
class Cuboid : public ThreeDim {
    void calArea();
    public :
             Cuboid ();
             Cuboid (float a);
             Cuboid (float a,float b,float c);
             virtual void printArea(); 
};
//---------------------------------------------------------------------------------------------------------------------------------------

void Cuboid :: calArea() {
    if (length<=0||breadth<=0)
    {
        cout << "\nError 20: No figure possible.";
        exit(20);        
    }
    curvedarea=2*height*(length+breadth);
    totalarea=2*(length*breadth)+2*(breadth*height)+2*(height*length);
    return;    
}

Cuboid :: Cuboid () {
    length=breadth=height=1;
    shape="Cube";
    calArea();
}

Cuboid :: Cuboid (float a) {
    length=breadth=height=a;
    shape="Cube";
    calArea();
}

Cuboid :: Cuboid (float a,float b,float c) {
    length=a; breadth=b; height=c;
    shape="Cuboid";
    calArea();
}

void Cuboid :: printArea () {
    cout <<"\nThe lateral surface area of the "<<shape<<" is "<<curvedarea<<" sq units and total area is "<<totalarea<<" sq units.";
    return;
}

//-----------------------------------------------------------------------------------------------------------------------------------------

class Sphere : public ThreeDim {
    void calArea();
    public : 
             Sphere ();
             Sphere (float r);
             virtual void printArea();
};

void Sphere :: calArea () {
    totalarea=4*PI*radius*radius;
    return;       
}

Sphere :: Sphere () {
    radius=1;
    shape="Sphere";
    calArea();
}

Sphere :: Sphere (float r){
    radius=r;
    shape="Sphere";
    calArea();
}

void Sphere :: printArea () {
    cout << "\nThe area of the sphere is "<<totalarea<<" sq units.";
    return;
}
//---------------------------------------------------------------------------------------------------

int main () {

    Triangle triangle(2,3,4);
    triangle.printArea();


    Rectangle r(2.2,3);
    r.printArea();
    Rectangle r2(20.5);
    r2.printArea();

    Circle c(5.5);
    c.printArea();

    Cone cone(8,12,0);
    cone.printArea();

    Cuboid cuboid;
    cuboid.printArea();

    Sphere sphere(23.4);
    sphere.printArea();
}