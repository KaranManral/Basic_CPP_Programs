// WAP to check if a number is even or odd

#include <iostream>

using namespace std;

bool even(int num)
{
	if(num%2==0)						//Checking for even
		return true;
	
	else 
		return false;
}

int main()
{
	int num;
	cout <<"Enter a number"<<endl;
	cin >>num;                        //Inputting number
	
	if(even(num))						//Checking for even
		cout <<"Number is even";	
	else 
		cout <<"Number is odd";
	return 1;
}
