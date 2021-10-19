//WAP to print Factors and prime factors of a number

#include <iostream>

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

void printFactors(int n)       //Function to print factors
{
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			cout<<i<<"\t";
	}
}

void printPFactors(int n)       //Function to print Prime factors
{
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		if(checkPrime(i))     //Checking for prime
			cout<<i<<"\t";
	}
}

int main()
{
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	cout<<"Factors of "<<num<<" are: ";
	printFactors(num);                                    //Calling printFactors()
	cout<<"\nPrime Factors of "<<num<<" are: ";
	printPFactors(num);									//Calling printPFactors()
}
