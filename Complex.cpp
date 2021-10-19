//WAP to create a class Complex and perform basic calculation on complex numbers
#include <iostream>
#include <iomanip>

using namespace std;

class Complex
{
	private:double real;  
			double imaginary;
			
	public:void const print() //Print Function
			{
				if(imaginary>=0)
					cout<<real<<"+"<<imaginary<<"i"<<endl;
				else
					cout<<real<<imaginary<<"i"<<endl;	
			}
			
			Complex(int r,int i) //Parameterised Constructor
			{
				real=r;
				imaginary=i;
			}
			
			Complex() //Default Constructor
			{
				real=0.0;
				imaginary=0.0;
			}
			Complex add(const Complex& c);
			Complex sub(const Complex& c);
			Complex pro(const Complex& c);
			Complex div(const Complex& c);		
};

Complex Complex::add(const Complex& c) //Function to perform add operation	
{
	Complex c1;
	c1.real=real+c.real;
	c1.imaginary=imaginary+c.imaginary;
	return c1;
}

Complex Complex::sub(const Complex& c) //Function to perform subtraction
{
	Complex c1;
	c1.real=real-c.real;
	c1.imaginary=imaginary-c.imaginary;
	return c1;
}

Complex Complex::pro(const Complex& c) //Function to perform multiplication
{
	Complex c1;
	c1.real=(real*c.real)-(imaginary*c.imaginary);
	c1.imaginary=(real*c.imaginary)+(c.real*imaginary);
	return c1;
}

Complex Complex::div(const Complex& c) //Function to perform division
{
	Complex c1;
	double temp=-c.imaginary;
	double temp1=(c.real*c.real)+(c.imaginary*c.imaginary);
	c1.real=((real*c.real)-(imaginary*temp))/temp1;
	c1.imaginary=((real*temp)+(c.real*imaginary))/temp1;
	return c1;
}



int main()
{
	double r1,i1,r2,i2;
	cout<<"Enter the real part of first complex number"<<endl;
	cin>>r1;
	cout<<"Enter the imaginary part of first complex number"<<endl;
	cin>>i1;
	cout<<"Enter the real part of second complex number"<<endl;
	cin>>r2;
	cout<<"Enter the imaginary part of second complex number"<<endl;
	cin>>i2;
	Complex ob1(r1,i1);
	Complex ob2(r2,i2);
	Complex ob3,ob4,ob5,ob6;
	ob3=ob1.add(ob2);
	ob4=ob1.sub(ob2);
	ob5=ob1.pro(ob2);
	ob6=ob1.div(ob2);
	cout<<"\n Complex Number after addition=";
	ob3.print();
	cout<<"\n Complex Number after subtraction=";	
	ob4.print();
	cout<<"\n Complex Number after multiplication=";	
	ob5.print();
	cout<<"\n Complex Number after division=";	
	ob6.print();
	return 1;
}
