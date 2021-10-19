#include <iostream>
#include <cmath>

using namespace std;

double perimeter(double a,double b,double c)
{
	return a+b+c;                   //Returning Perimeter
}

double area(double a,double b)
{
	return (0.5*a*b);               //Returning Area.
}

int main()
{
	int a,b;
	double c;
	cout<<"Enter the Height and Base of Triangle respectively"<<endl;
	cin>>a>>b;
	c=sqrt(pow(a,2)+pow(b,2));        //Calculating the third side i.e. Hypotenuse.
	cout<<"Peimeter="<<perimeter(a,b,c);
	cout<<"\n Area="<<area(a,b); 
	return 1;
}
