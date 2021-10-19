/* WAP to compute the real roots of a quadratic equations: ax2+bx+c=0, Further,  

if a, b = 0 then there is no solution, 

if a = 0 one root (-c/b) 

if discriminant is –ve, there are no real roots. 

for all other combinations there are two roots. */

#include<iostream>
#include<cmath>

using namespace std;

void input(double& a,double& b,double& c)
{
	cout <<"Enter the value of a,b,c respectively"<<endl;
	cin >>a;
	cin >>b;
	cin >>c;
}

void print(double a,double b,double c,double D,double r1,double r2)
{
	D=pow(b,2)-(4*a*c);  //Calculating Discriminant
	
	cout <<"\n Quadratic Equation => "<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl;
	
	if(a==0&&b==0)                                                                 //No solution
	cout <<"\n There is no solution of this equation.";
	
	else if(D<0)																		//Imaginary Roots
		cout <<"\n There are no real roots.";
	
	else if(D==0)																//Equal Roots
	{
		r1=(-b+pow(D,.5))/(2*a);
		cout <<"\n The equation has two equal roots that is :  "<<r1;
	}
	
	else if(a==0&&b!=0)															//Only one Root
	{
		r1=(-c/b);
		cout <<"\n The only root of the equation is "<<r1;
	}
	
	else                                                                       //Two distinct Roots
	{
		r1=(-b+pow(D,.5))/(2*a);
		r2=(-b-pow(D,.5))/(2*a);
		cout <<"\n The two real roots of the equation are "<<r1<<" and "<<r2;
	}
}

int main()
{
	double a,b,c,D,r1,r2;     //a,b,c are coefficients of x^2,x,c respectively. D=Discriminant  r1=root1 r2=root2
	input(a,b,c);
	print(a,b,c,D,r1,r2);
	return 1;
}
