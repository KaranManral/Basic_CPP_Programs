//	Write a program to input any alphabet and check whether it is vowel or consonant.

#include<iostream>

using namespace std;

int main()
{
	char c;
	cout <<"Enter an Alphabet \n";
	cin >>c;
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')     //Checking for Vowel
		cout <<"\n Given alphabet is a Vowel";
	else
		cout <<"\n Given alphabet is a Consonant";
	return 1;
}
