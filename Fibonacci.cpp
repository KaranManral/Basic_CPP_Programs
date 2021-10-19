//WAP to print fibonacci series using recursion

#include <iostream>
#include <iomanip>

using namespace std;

int fib(int a,int b,int c,int n)  //Function to create and print fibonacci series using recursion
{
	cout<<" "<<c<<" "; //Printing sum of previous two terms
	if(n>0)  
	{
		a=b;   //Swapping values
		b=c;  //Swapping values
		c=a+b; //Swapping values
		return fib(a,b,c,n-1);  //Calling function itself for recursion with one less value of n
	}	
	return c;
}

void genSeries(int a,int b,int c,int n)  //Function to print first two terms of the series
{
	cout<<a<<" "<<b<<" ";
	fib(a,b,c,n-3);    //Calling n with 3 less value as first 3 terms are printed irrespective of value of n
}

int main()
{
	int a=0,b=1,c=a+b,n;
	cout<<"Enter the limit n of series"<<endl;
	cin>>n;
	cout<<"Printing Fibonacci series"<<endl;
	genSeries(a,b,c,n);
	return 1;
}
