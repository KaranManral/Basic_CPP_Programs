// 	Write a program to check whether a character is uppercase or lowercase alphabet. 

#include<iostream>

using namespace std;

int main()
{
	char c;
	cout <<"Enter a Alphabet \n";
	cin >>c;
	if(isupper(c))
		cout <<"\n Alphabet is Upper Case";
	else
		cout <<"\n Alphabet is Lower Case";		
	return 1;
}
