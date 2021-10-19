//WAP using functions to reverse a number and check if it is a palindrome. 

#include <iostream>

using namespace std;

int reverse(int num)    //For reversing the number
{
	int rev=0,rem;
	while(num>0)
	{
		rem=num%10;        //Extracting digits
		rev=(rev*10)+rem;    //Adding digits to new variable
		num/=10;
	}
	return rev;
}

int main()
{
	int num,num1;
	cout <<"Enter the number to be checked for Palindrome"<<endl;
	cin >>num;
	num1=num;
	if(reverse(num1)==num)       //Calling the reverse function and checking if both numbers are same
		cout <<"The number is Palindrome";     //Printing if condition true
	else
		cout <<"The number is not a Palindrome"; //Printing if condition false
	return 1;
}
