/* WAP to compute the sum of the first n terms of the following series  

S = 1+1/2+1/3+1/4+……  
S = 1 + 1/2! + 1/3! + 1/4! +……  
S =1-2+3-4+5………… */

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

double series1(int n)
{
	double sum=0,a=1;
	for(int i=1;i<=n;i++)
	{
		sum+=a/i;   //Calculate sum of series 1
	}
	return sum;
}

double series2(int n)
{
	double sum=0,a=1;
	for(int i=1;i<=n;i++)
	{
		sum+=a/(calFact(i));     //Calculate sum of series 1 by calculating factorial of i
	}
	return sum;
}

int series3(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)   //Checking for even.
			sum+=(-i);
		else
			sum+=i;	
	}
	return sum;
}

int main()
{
	int n,ch;
	cout<<"Enter a n limit of series"<<endl;
	cin>>n;          //Taking limit of series
Repeat:	cout<<"Enter 1 for sum of series one.\n Enter 2 for sum of series two.\n Enter 3 for sum of series three."<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				cout<<"Sum of series1="<<series1(n);
				break;
			}
		case 2:
			{
				cout<<"Sum of series2="<<series2(n);
				break;
			}
		case 3:
			{
				cout<<"Sum of series3="<<series3(n);
				break;
			}
		default:
			{
				cout<<"WRONG CHOICE"<<endl;
				goto Repeat;
			}			
	}
}
