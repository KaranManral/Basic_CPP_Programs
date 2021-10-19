//WAP to reverse a number.

#include <iostream>

using namespace std;

int rev=0,rem;

int reverse(int num)    //For reversing the number
{
	if(num>0)
	{
		rem=num%10;    //Extracting Digits
		rev=(rev*10)+rem;        //Adding digit to new variable
		reverse(num/10);
	}
	return rev;
}

int main()
{
	int num;
	cout <<"Enter the number to be reversed"<<endl;
	cin >>num;
	cout <<"The reversed number is :-  "<<reverse(num);
	return 1;
}
