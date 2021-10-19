// WAP to check if a character is alphabet.
//	Write a program to input any character and check whether it is alphabet, digit or special character. 
// 	Write a program to check whether a character is uppercase or lowercase alphabet. 
//	Write a program to input any alphabet and check whether it is vowel or consonant.


#include<iostream>

using namespace std;

void alphabet(char ch)     //Checking for alphabet.
{
	cout <<"Enter a character"<<endl;
	cin >>ch;
	
	if(ch>64&&ch<91)
		cout <<"\n Character is a alphabet";
		
	else if(ch>98&&ch<123)	
		cout <<"\n Character is a alphabet";
		
	else
		cout <<"\n Character is not a alphabet";	
}

void character(char ch)     //Checking for alphabet,digit or special character.
{
	cout <<"Enter a character"<<endl;
	cin >>ch;
	
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))     //Checking for Alphabet
		cout <<"\n Character is a Alphabet";
		
	if(ch>=48&&ch<=57)                       //Checking for Digits
		cout <<"\n Character is a Digit";
		
	if((ch>=32&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=126))   //Checking for Special Character
		cout <<"\n Character is a Special Character";
}

void upperCase(char ch)    //Checking upper case or lower case.
{
	A:cout <<"Enter an alphabet"<<endl;
	cin >>ch;
	
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))     //Checking for Alphabet
	{
		if(isupper(ch))
			cout <<"\n Alphabet is Upper Case";
		
		else
			cout <<"\n Alphabet is Lower Case";		
	}
	else 
	{
		cout<<"INVALID INPUT"<<endl;
		goto A;
	}
}

void vowel(char ch)      //Checking for vowel.
{
	A:cout <<"Enter a alphabet"<<endl;
	cin >>ch;
	
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))     //Checking for Alphabet
	{
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')     //Checking for Vowel
			cout <<"\n Given alphabet is a Vowel";
		
		else
			cout <<"\n Given alphabet is a Consonant";
	}
	else
	{
		cout<<"INVALID INPUT"<<endl;
		goto A;
	}
}

int main()
{
	char ch;
	int choice;
		
	Repeat:	cout <<"Enter the choice accordingly: \n 1) To check if character is an Alphabet \n 2) To check if caracter is an Alphabet or Digit or Special Character \n 3) To check if Alphabet is Uppercase \n 4) To check if Alphabet is a vowel"<<endl;
	cin >>choice;
		
	switch(choice)
	{
		case 1:
			{
				alphabet(ch);
				break;
			}
		case 2:
			{
				character(ch);
				break;
			}	
		case 3:
			{
				upperCase(ch);
				break;
			}	
		case 4:
			{
				vowel(ch);
				break;
			}
		default:
			{
				cout<<"\n Wrong choice entered. Please Enter a Correct choice \n"<<endl;
				goto Repeat;
			}		
	}
	return 1;
}
