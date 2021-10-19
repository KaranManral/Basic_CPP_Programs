//WAP to create a class Fraction and do basic operations of plus,minus,multiply and divide
#include <iostream>
#include <iomanip>

using namespace std;

class Fraction
{
	private:int numerator;
			int denomenator;
			int gcd(int n1,int n2);
			bool checkPrime(int n); 
	
	public: Fraction add(const Fraction& f1);
			Fraction minus(const Fraction& f1);
			Fraction multiply(const Fraction& f1);
			Fraction divide(const Fraction& f1);
			void const print();	
			
			Fraction()
			{
				numerator=0;
				denomenator=1;
			}
			
			Fraction(int n,int d)
			{
				numerator=n;
				denomenator=d;
			}			
};

bool Fraction::checkPrime(int n)    //Function to check if prime 
{ 
    int ctr=0; 
    for(int i=1;i<=n/2;i++) 
    { 
        if(n%i==0)       //Checking for divisibility
            ctr++;      //Increasing counter if divisible..
    } 
    if(ctr==1) 
        return true; 
    else 
        return false;     
} 

int Fraction::gcd(int n1,int n2) //Function to Calculate Greatest Common Divisor
{
	int pro=1;
	for(int i=1;i<=n1,i<=n2;i++)
	{
		if(n1%i==0) //Checking for divisibility of n1
			if(n2%i==0)  //Checking for divisibility of n2
				if(checkPrime(i)) //Checking for Prime
				{
					pro*=i;
					n1/=i;
					n2/=i;
					i=1;
				}
	}
	return pro;
}

Fraction Fraction::add(const Fraction& f)
{
	Fraction f1;
	int lcm=(denomenator*f.denomenator)/gcd(denomenator,f.denomenator);
	f1.numerator=(((lcm/denomenator)*numerator)+((lcm/f.denomenator)*f.numerator));
	f1.denomenator=lcm;
	return f1;
}

Fraction Fraction::minus(const Fraction& f)
{
	Fraction f1;
	int lcm=(denomenator*f.denomenator)/gcd(denomenator,f.denomenator);
	f1.numerator=(((lcm/denomenator)*numerator)-((lcm/f.denomenator)*f.numerator));
	f1.denomenator=lcm;
	return f1;
}

Fraction Fraction::multiply(const Fraction& f)
{
	Fraction f1;
	f1.numerator=(f.numerator*numerator);
	f1.denomenator=(f.denomenator*denomenator);
	return f1;
}

Fraction Fraction::divide(const Fraction& f)
{
	Fraction f1;
	f1.numerator=(numerator*f.denomenator);
	f1.denomenator=(denomenator*f.numerator);
	return f1;
}

void const Fraction::print()
{
	if(numerator==0)
		cout<<"0"<<endl;
	else if(denomenator==0)
		cout<<"Infinite"<<endl;	
	else if(denomenator==1)
		cout<<numerator<<endl;
	else if(numerator==denomenator)
		cout<<"1"<<endl;		
	else
	{	
		int temp=gcd(numerator,denomenator);
		numerator=numerator/temp;
		denomenator=denomenator/temp;
		cout<<numerator<<"/"<<denomenator<<endl;
	}
}
int main()
{
	Fraction ob1,ob2,ob3,ob4;
	int n1,d1,n2,d2;
	cout<<"Enter Numerator of Fraction 1"<<endl;
	cin>>n1;
	cout<<"Enter Denomenator of Fraction 1"<<endl;
	cin>>d1;
	cout<<"Enter Numerator of Fraction 2"<<endl;
	cin>>n2;
	cout<<"Enter Denomenator of Fraction 2"<<endl;
	cin>>d2;
	Fraction ob(n1,d1);
	Fraction ob5(n2,d2);
	ob1=ob.add(ob5);
	ob2=ob.minus(ob5);
	ob3=ob.multiply(ob5);
	ob4=ob.divide(ob5);
	cout<<"\n Fraction after adding=";
	ob1 .print();
	cout<<"\n Fraction after subtracting=";
	ob2.print();
	cout<<"\n Fraction after multiplying=";
	ob3.print();
	cout<<"\n Fraction after dividing=";
	ob4.print();
	return 1;
}
