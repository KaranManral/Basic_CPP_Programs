//WAP to create a class Circle and calculate area and circumference

#include <iostream>
#include <iomanip>

using namespace std;

class Circle
{
	private:double radius;
			double area;
			double circum;
	
	public:void const print();
		   void set(int r);	
		   void calcArea(double r);
		   void calcCircum(double r);
		   Circle();
};

Circle::Circle() //default constructor
{
	radius=0.0;
}

void Circle::set(int r) //set function to get radius
{
	radius=r;
}

void Circle::calcArea(double r) //Function to calculate area and store in data member area
{
	area=3.14*radius*radius;
}

void Circle::calcCircum(double r) //Function to calculate circumference and store in data member circumference
{
	circum=2*3.14*radius;
}

void const Circle::print() //Function to print Area and Circumference
{
	cout<<"Area of circle="<<area<<endl;
	cout<<"Circumference of Circle="<<circum<<endl;
}

int main()
{
	Circle ob;
	double r;
	cout<<"Enter the radius of circle"<<endl;
	cin>>r;
	ob.set(r);
	ob.calcArea(r);
	ob.calcCircum(r);
	ob.print();
	return 1;
}
