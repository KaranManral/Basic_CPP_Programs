#include <iostream>

using namespace std;

int getFirstDigit(int n)      
{
	return n/10;                      //Extracting first digit.
}

int getSecDigit(int n)
{
	return n%10;                              //Extracting second digit.
}

int sumOfdigit(int n)
{
	return (getFirstDigit(n)+getSecDigit(n));                  //Returning Sum of first and second digit.
}

int main()
{
	int num;
	Repeat:	cout<<"Enter a two  digit number"<<endl;
	cin>>num;
	if(num/100!=0)
	{
		cout<<"Wrong Input"<<endl;
		goto Repeat;
	}
	else
	{
		cout<<"Sum of Digits of number= "<<endl;
		cout<<sumOfdigit(num);
	}	
	return 1;
}
