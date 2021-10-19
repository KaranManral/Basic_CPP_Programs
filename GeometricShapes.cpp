#include <iostream>
#include <cmath>

using namespace std;

class Shapes {
    protected : 
                static double PI;
                virtual void calArea()=0; //Pure virtual function of Area Calculation 
                virtual void print()=0; //Pure virtual Function of Printing
};

double Shapes :: PI=3.14; //Defining PI

class TwoDim : public Shapes {
    protected : 
                double area; //To store area of shapes
                double a, b, c, radius;
                virtual void calArea()=0; //Pure virtual function of Area Calculation
                virtual void print()=0; //Pure virtual Function of Printing
};

class ThreeDim : public Shapes {
    protected : 
                double area; //To store area of shapes
                double radius,side;
                virtual void calArea()=0; //Pure virtual function of Area Calculation
                virtual void print()=0; //Pure virtual Function of Printing
};

class Triangle : public TwoDim {
    void calArea(); 
    double calPeri();
    public :
             Triangle ()  //Default Constructor
             {
                 a=1;
                 b=1;
                 c=1;
             }
             Triangle (double x,double y,double z) //Parameterised Constructor
             {
                a=x;
                b=y;
                c=z;
                calArea(); //Calling calArea Function to calculate area
             }
             void print(); 
};

void Triangle::calArea() //Function to calculate Area of Triangle
{
    double temp;
    double s=(a+b+c)/2.0;
    temp=sqrt(s*(s-a)*(s-b)*(s-c));
    area=temp;
}

double Triangle::calPeri() //Function to calculate Perimeter of Triangle
{
    return (a+b+c);
}

void Triangle::print() //Function printing Details
{
    cout<<"Area of the Triangle="<<area<<" cm^2"<<endl;
    cout<<"Perimeter of the Triangle="<<calPeri()<<" cm"<<endl;
}

class Rectangle : public TwoDim {
    void calArea();
    double calPeri();
    public :
             Rectangle () //Default Constructor
             {
                 a=1;
                 b=1;
             }
             Rectangle (double x,double y) //Parameterised Constructor
             {
                a=x;
                b=y;
                calArea(); //Calling calArea Function to calculate area
             }
             void print();
};

void Rectangle::calArea() //Function calculating Area
{
    area=a*b;
}

double Rectangle::calPeri() //Function calculating Perimeter
{
    return (2*(a+b));
}

void Rectangle::print() //Function printing Details
{
    cout<<"Area of the Rectangle="<<area<<" cm^2"<<endl;
    cout<<"Perimeter of the Rectangle="<<calPeri()<<" cm"<<endl;
}

class Circle : public TwoDim {
    void calArea();
    double calPeri();
    public :
             Circle () //Default Constructor
             {
                 radius=1;
             }
             Circle (double x)  //Parameterised Constructor
             {
                radius=x;
                calArea(); //Calling calArea Function to calculate area
             }
             void print();
};

void Circle::calArea() //Function Calculating Area
{
    area=PI*radius*radius;
}

double Circle::calPeri() //Function Calculating Perimeter
{
    return (2*PI*radius);
}

void Circle::print() //Function printing Details
{
    cout<<"Area of the Circle="<<area<<" cm^2"<<endl;
    cout<<"Circumference of the Circle="<<calPeri()<<" cm"<<endl;
}

class Cone:public ThreeDim
{
    void calArea();
    double calVol();
    public:Cone() //Default Constructor
            {
                radius=1;
                side=1;
            }
            Cone(double r,double h) //Parameterised Constructor
            {
                radius=r;
                side=h;
                calArea(); //Calling calArea Function to calculate area
            }
            void print();
};

void Cone::calArea()//Function Calculating Area
{
    area=((PI*radius)*(radius+sqrt((radius*radius)+(side*side))));
}

double Cone::calVol() //Function Calculating Volume
{
    return ((1/3.0)*PI*radius*radius*side);
}

void Cone::print() //Function printing Details
{
    cout<<"Area of the Cone="<<area<<" cm^2"<<endl;
    cout<<"Volume of the Cone="<<calVol()<<" cm^3"<<endl;
}

class Cube:public ThreeDim
{
    void calArea();
    double calVol();
    public:Cube() //Default Constructor
            {
                radius=1;
                side=1;
            }
            Cube(double s) //Parameterised Constructor
            {
                side=s;
                calArea(); //Calling calArea Function to calculate area
            }
            void print();
};

void Cube::calArea() //Function Calculating Area 
{
    area=(6*side*side);
}

double Cube::calVol() //Function Calculating Volume
{
    return (side*side*side);
}

void Cube::print() //Function printing details 
{
    cout<<"Area of the Cube="<<area<<" cm^2"<<endl;
    cout<<"Volume of the Cube="<<calVol()<<" cm^3"<<endl;
}

class Sphere:public ThreeDim
{
    void calArea();
    double calVol();
    public:Sphere() //Default Constructor
            {
                radius=1;
            }
            Sphere(double r) //Parameterised Constructor
            {
                radius=r;
                calArea(); //Calling calArea Function to calculate area
            }
            void print();
};

void Sphere::calArea() //Function Calculating Area
{
    area=(4*PI*radius*radius);
}

double Sphere::calVol() //Function Calculating Volume
{
    return ((4/3.0)*PI*radius*radius*radius);
}

void Sphere::print() //Function Printing Details
{
    cout<<"Area of the Sphere="<<area<<" cm^2"<<endl;
    cout<<"Volume of the Sphere="<<calVol()<<" cm^3"<<endl;
}

void printMainFunc()//Function for printing all details in ordered way
{
    char ch,ch1;
    int i;
    double a,b,c;
    while(ch!='X')
    {
        cout<<"Enter the choice to get information about following shapes \n1 for Two Dimensional Shapes \n2 for Three Dimensonal Shapes \nAny else digit to exit program"<<endl;
        cin>>i;
        switch(i)
        {
            case 1:
            {
                cout<<"Enter T for Triangle \nEnter R for Rectangle \nEnter C for Circle"<<endl;
                cin>>ch1;
                switch(ch1)
                {
                    case 'T':
                    {
                        cout<<"Enter Sides of Triangle"<<endl;
                        cin>>a>>b>>c;
                        Triangle T(a,b,c);
                        T.print();
                        break;
                    }
                    case 'R':
                    {
                        cout<<"Enter Length and Breadth of Rectangle"<<endl;
                        cin>>a>>b;
                        Rectangle R(a,b);
                        R.print();
                        break;
                    }
                    case 'C':
                    {
                        cout<<"Enter Radius of Circle"<<endl;
                        cin>>a;
                        Circle C(a);
                        C.print();
                        break;
                    }
                }
                break;
            }
            case 2:
            {
                cout<<"Enter C for Cone \nEnter A for Cube \nEnter S for Sphere"<<endl;
                cin>>ch1;
                switch(ch1)
                {
                    case 'C':
                    {
                        cout<<"Enter Radius and Height of Cone respectively"<<endl;
                        cin>>a>>b;
                        Cone ob(a,b);
                        ob.print();
                        break;
                    }
                    case 'A':
                    {
                        cout<<"Enter Side of Cube"<<endl;
                        cin>>a;
                        Cube C1(a);
                        C1.print();
                        break;
                    }
                    case 'S':
                    {
                        cout<<"Enter Radius of Sphere"<<endl;
                        cin>>a;
                        Sphere S(a);
                        S.print();
                        break;
                    }
                }
                break;
            }
            default:
            {
                cout<<"Program Terminated By User"<<endl;
                exit(0);
            }
        }
        cout<<"Enter R to run program again and X to exit"<<endl;
        cin>>ch;  
    } 
}

int main()
{
    printMainFunc();
    return 1;
}//main