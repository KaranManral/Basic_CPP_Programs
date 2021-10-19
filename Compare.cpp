// WAP to compare two numbers.

#include<iostream>

using namespace std;

void compare(int num1,int num2)
{
	if(num1==num2)                              //Comparing two numbers.
		cout<<"\n Both Numbers are Equal";
		
	else if(num1>num2)							  
		cout<<"\n First number is greater than second by "<<(num1-num2);

	else 
		cout<<"\n Second number is greater than first by "<<(num2-num1);
}

int main()
{
	int num1,num2;
	cout <<"Enter first number"<<endl;   
	cin >>num1;									//Inputting first number
	cout <<"Enter second number"<<endl;
	cin >>num2;								   //Inputting second number
	
	compare(num1,num2);
	return 1;
}
