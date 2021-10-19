//WAP to create a class Box with Data members Length,Breadth and Height and perform following actions.

#include "Box.h"

int main()
{
    double l,b,h,l1,b1,h1;
    cout<<"Enter Length,Breadth and Height of the Box"<<endl;
    cin>>l>>b>>h;
    Box B(l,b,h);
    Box B1;
    cout<<"Assigning Box Details to another object \n"<<endl;
    B1=B;
    cout<<"Printing Details of the Box"<<endl;
    B1.printDetails();
    cout<<"\n Surface Area of the Box="<<B1.calcSurfaceArea()<<" cm^2"<<endl;
    cout<<"\n Volume of the Box="<<B1.calcVolume()<<" cm^3"<<endl;
    B1.checkCube();
    cout<<"\n Using post Increment operator"<<endl;
    (B1++).printDetails();
    cout<<"\n Using post Decrement operator"<<endl;
    (B1--).printDetails();
    cout<<"\n Using pre Increment operator"<<endl;
    (++B1).printDetails();
    cout<<"\n Using pre Decrement operator"<<endl;
    (--B1).printDetails();
    char ch;
    cout<<"\n Do you want to Compare this box with another? Enter Y for Yes,N for No"<<endl;
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        cout<<"\n Enter Length,Breadth and Height of another Box"<<endl;
        cin>>l1>>b1>>h1;
        Box B2(l1,b1,h1);
        if(B1==B2)
            cout<<"\n Both boxes are equal"<<endl;
        else    
            cout<<"\n Both boxes are not equal"<<endl; 
    }
    return 1;
}//main