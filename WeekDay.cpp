// 	Write a program to input week number and print week day.

#include<iostream>

using namespace std;

int main()
{
	int w;
	string s[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"}; 
	cout <<"Enter week number \n";
	cin >>w;
	cout <<"Week Day is : \t"<<s[w-1];
	return 1;
}
