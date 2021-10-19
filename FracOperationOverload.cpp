#include <iostream>
#include <iomanip>

using namespace std;

bool checkPrime(int n)    //Function to check if prime 
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

class Fraction
{
	private: int numerator;
			 int denomenator;
			 int gcd(int n1,int n2);
	
	public: Fraction();
			Fraction(int n,int d);	 
			void print();
			void operator+=(const Fraction& f);
			Fraction operator++();
			Fraction operator--();
			Fraction operator++(int);
			Fraction operator--(int);
			Fraction& operator=(const Fraction f);
			Fraction operator==(const Fraction& f);
			Fraction operator+(const Fraction& f1);
};

Fraction::Fraction()
{
	numerator=0;
	denomenator=1;
}

Fraction::Fraction(int n,int d)
{
	numerator=n;
	denomenator=d;
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

void Fraction::operator +=(const Fraction& f)
{
	int lcm;
	lcm=(denomenator*f.denomenator)/gcd(denomenator,f.denomenator);
	numerator=numerator*(lcm/denomenator)+f.numerator*(lcm/f.denomenator);
	denomenator=lcm;
}

Fraction Fraction::operator ++()
{
	numerator+=denomenator;
	return (*this);
}

Fraction Fraction::operator --()
{
	numerator-=denomenator;
	return (*this);
}

Fraction Fraction::operator ++(int)
{
	const Fraction original (*this);
	numerator+=denomenator;
	return original;
}

Fraction Fraction::operator --(int)
{
	const Fraction original (*this);
	numerator-=denomenator;
	return original;
}

Fraction& Fraction::operator =(const Fraction f1)
{
	numerator=f1.numerator;
	denomenator=f1.denomenator;
	return (*this);
}

Fraction Fraction::operator ==(const Fraction& f1)
{
	double d=numerator/denomenator;
	double d1=f1.numerator/f1.denomenator;
	if(d==d1)
		return (*this);	
}

Fraction Fraction::operator +(const Fraction& f)
{
	int lcm;
	lcm=(denomenator*f.denomenator)/gcd(denomenator,f.denomenator);
	numerator=numerator*(lcm/denomenator)+f.numerator*(lcm/f.denomenator);
	denomenator=lcm;
}

void Fraction::print()
{
	cout<<"Fraction="<<numerator<<"/";
	cout<<denomenator<<endl;
}

int main()
{
	Fraction f1(1,2);
	Fraction f2(f1);
	Fraction f3(2,3);
	Fraction f4;
	Fraction f5(f3);
	f1++.print();
	f1--.print();
	f2=f2+(++f1);
	f2.print();
	f4=f3;
	f4.print();
	(f4==f1).print();
	f5=f5+(--f3);
	f5.print();
	(f1+f3).print();
	f4+=f1;
	f4.print();
	return 1;
}
