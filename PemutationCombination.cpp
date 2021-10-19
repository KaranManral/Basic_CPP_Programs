//WAP to calculate Factorial of a number.
#include <iostream>

using namespace std;

int calFact(int n)    //Function to calculate Factorial
{
	int fact=1;
	for (int i=1;i<=n;i++)
	{
		fact*=i;    //Calculating Factorial
	}
	return fact;
}

double permutation(int n,int r)             //Function to calculate permutaion
{
	double permu;
	permu=calFact(n)/calFact((n-r));      //Calculating Permutaion
	return permu;
}

double combination(int n,int r)                //Function to calculate combination
{
	double combi;
	combi=calFact(n)/(calFact(r)*calFact((n-r)));         //Calculating combination
	return combi;
}

void input(int& n,int& r)   //Taking inputs
{
A:	cout<<"Enter value of n"<<endl;
	cin>>n;
	cout<<"Enter value of r"<<endl;
	cin>>r;
	if(r>n)
	{
		cout<<"WRONG INPUT"<<endl;
		goto A;
	}
}

int main()
{
	int n,r;
	double permu,combi;
	input(n,r);                      //Calling input()
	permu=permutation(n,r);          //Calling permutaion()
	combi=combination(n,r);			//Calling Combination()
	cout<<"Permutaion of n,r= "<<permu<<endl;
	cout<<"Combination of n,r= "<<combi;
	return 1;
}
