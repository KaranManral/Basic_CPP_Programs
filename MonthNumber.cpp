//	Write a program to input month number and print number of days in that month.


#include<iostream>

using namespace std;

int main()
{
	int m;
	char c;
	int a[]={31,29,31,30,31,30,31,31,30,31,30,31};    //Month Days for Leap Year
	int b[]={31,28,31,30,31,30,31,31,30,31,30,31};   //Month Days for non Leap Year
	cout <<"Enter the month number \n";
	cin >>m;
	cout <<"Is it a Leap Year? Enter Y or N \n";    
	cin >>c;
	if(c=='Y')
		cout <<"\n Number of Days : "<<a[m-1];
	else
		cout <<"\n Number of Days : "<<b[m-1];
	return 1;
}
