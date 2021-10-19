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

int GCD(int n1,int n2) //Function to Calculate Greatest Common Divisor
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

int main()
{
	int n1,n2;
	cout<<"Enter two numbers"<<endl;
	cin>>n1>>n2;
	cout<<"GCD of "<<n1<<" and "<<n2<<" is "<<GCD(n1,n2);  //Calling GCD
	return 1;
}
