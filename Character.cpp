//	Write a program to input any character and check whether it is alphabet, digit or special character. 

#include<iostream>

using namespace std;

int main()
{
	char c;
	cout <<"Enter a character \n";
	cin >>c;
	if((c>=65&&c<=90)||(c>=97&&c<=122))     //Checking for Alphabet
		cout <<"\n Character is a Alphabet";
	if(c>=48&&c<=57)                       //Checking for Digits
		cout <<"\n Character is a Digit";
	if((c>=32&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126))   //Checking for Special Character
		cout <<"\n Character is a Special Character";
	return 1;
}
