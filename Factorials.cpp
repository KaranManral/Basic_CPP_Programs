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

void input(int& n)   //Taking inputs
{
	cout<<"Enter a number to calculate factorial"<<endl;
	cin>>n;
}

int main()
{
	int num,factorial;
	input(num);                      //Calling input()
	factorial=calFact(num);			//Calling calfact()
	cout<<"Factorial of "<<num<<" is "<<factorial;
	return 1;
}
