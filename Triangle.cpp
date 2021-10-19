//WAP to create a class Triangle and Overload area function and =,== operators

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Triangle
{
    private: double a,b,c;
             int angle1,angle2,angle3;
    public: double calcArea(const Triangle& T1);//Function to Calculate if Right Angled Triangle
            double calcArea(); //Overloaded Area Function to calculate Area of Triangle

            void const printDetails() //Printing details of Triangle
            {
                cout<<"Sides of Triangle are:"<<a<<"cm, "<<b<<"cm, "<<c<<"cm"<<endl;
                cout<<"Angles of Triangle are:"<<angle1<<", "<<angle2<<", "<<angle3<<" respectively"<<endl;
            }   

            bool operator==(const Triangle& T1); //Overloading Equality Operator
            void operator=(const Triangle& T1);  //Overloading assignment Operator
            Triangle(int a,int b,int c);        //Parameterised Constructor with Angles as Paramenter
            Triangle()                          //Default Constructor
            {
                a=0.0;
                b=0.0;
                c=0.0;
                angle1=0;
                angle2=0;
                angle3=0;
            }
};

Triangle::Triangle(int a1,int a2,int a3)
{
    double x,y,z;
    angle1=a1;
    angle2=a2;
    angle3=a3;
    if((angle1+angle2+angle3)!=180)    //Checking if Triangle is possible with given inputs or not
    {   cout<<"Triangle Not Possible with these angles"<<endl;
        exit(0);
    }
    else if(angle1==90||angle2==90||angle3==90)  //Checking if the triangle is a right angled Triangle
    {
        cout<<"Enter Base and Height of Triangle Respectively"<<endl;
        cin>>a>>b;
        c=sqrt(pow(a,2)+pow(b,2));
    }
    else
    {
        cout<<"Enter 3 sides of Triangle Respectively"<<endl;
        cin>>a>>b>>c;
    }
}

double Triangle::calcArea(const Triangle& T1) //Function Calculating Area of Right Angled Triangle
{
    double area;
    area=0.5*(T1.a*T1.b);
    return area;
}

double Triangle::calcArea()  //Function Calculating Area of Triangle
{
    double area;
    double s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

bool Triangle::operator==(const Triangle& T1) //Function Checking if two triangles are equal or not
{
    if(a==T1.a&&b==T1.b&&c==T1.c)
        return true;
    else    
        return false;    
}

void Triangle::operator=(const Triangle& T1) //Function Copying details of One Triangle onto other
{
    a=T1.a;
    b=T1.b;
    c=T1.c;
    angle1=T1.angle1;
    angle2=T1.angle2;
    angle3=T1.angle3;
}

int main()
{
    int a,b,c,x,y,z,ch;
    cout<<"Enter the angles of Triangle 1"<<endl;
    cin>>a>>b>>c;
    Triangle T1(a,b,c);
    Triangle T3;

A:  cout<<"Enter the choice \n 1 for calculating Area \n 2 for checking equality \n 3 for Assigning details of Triangle in another object"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            if(a==90||b==90||c==90) //Checking if Triangle is Right Angled or not.
                cout<<"Area of Triangle="<<showpoint<<T3.calcArea(T1)<<"cm^2"<<endl;
            else    
                cout<<"Area of Triangle="<<showpoint<<T1.calcArea()<<"cm^2"<<endl;
            break;    
        }
        case 2:
        {
            cout<<"Enter the angles of Triangle 2"<<endl;
            cin>>x>>y>>z;
            Triangle T2(x,y,z);
            if(T2==T1)
                cout<<"Both the Triangles are Congruent"<<endl;
            else    
                cout<<"Both Triangles are not Congruent"<<endl;   
            break;    
        }
        case 3:
        {
            T3=T1;
            T3.printDetails(); 
            break;
        }
        default:
        {
            cout<<"Wrong choice entered"<<endl;
            goto A;
        }
    }
    return 1;
}