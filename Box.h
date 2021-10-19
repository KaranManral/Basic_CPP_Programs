//WAP to create a class Box with Data members Length,Breadth and Height and perform following actions.

#include <iostream>
#include <iomanip>
using namespace std;

class Box
{
    private:double l,b,h;     //Variables for containg Length,Breadth and Height Respectively

    public:double calcSurfaceArea() //Function Calculating Total Surface Area of the Box
            {
                return (2*((l*b)+(b*h)+(h*l)));
            }

            double calcVolume()  //Function to calculate Volume of the Box
            {
                return (l*b*h);
            }

            void checkCube()  //Function to Check if the Box is a Cube or Cuboid
            {
                if((l==b)&&(b==h))
                    cout<<"Box is a Cube"<<endl;
                else
                    cout<<"Box is a Cuboid"<<endl;
            }

            Box() //Default Constructor
            {
                l=0.0;
                b=0.0;
                h=0.0;
            }

            Box(double x,double y,double z) //Parameterised Constructor
            {
                l=x;
                b=y;
                h=z;
            }

            Box operator++();
            Box operator--();
            Box operator++(int);
            Box operator--(int);
            
            void operator=(const Box& B1) //Overloading Assignment Operator
            {
                l=B1.l;
                b=B1.b;
                h=B1.h;
            }

            void const printDetails() //Printing Details of the Box
            {
                cout<<"Length of Box="<<l<<endl;
                cout<<"Breadth of Box="<<b<<endl;
                cout<<"Height of Box="<<h<<endl;
            }

            friend bool operator==(const Box& B1,const Box& B2);
};

bool operator==(const Box& B1,const Box& B2)  //Friend Function to overload Equal(==) operator
{
    if(B1.l==B2.l&&B1.b==B2.b&&B1.h==B2.h)
        return true;
    else
        return false;    
}

Box Box::operator++() //Overloading prefix ++ Operator
{
    l+=1;
    b+=1;
    h+=1;
    return (*this);
}

Box Box::operator--() //Overloading prefix -- Operator
{
    l-=1;
    b-=1;
    h-=1;
    return (*this);
}

Box Box::operator++(int) //Overloading postfix ++ Operator
{
    const Box Real=(*this);
    l+=1;
    b+=1;
    h+=1;
    return Real;
}

Box Box::operator--(int) //Overloading postfix -- Operator
{
    const Box Real=(*this);
    l-=1;
    b-=1;
    h-=1;
    return Real;
}