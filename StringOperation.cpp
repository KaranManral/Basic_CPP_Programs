//WAP to perform following operations on strings

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

void printCharPos(string s) //Positioning Character
{
	for(int i=0;i<s.length();i++)
		cout<<s.at(i)<<"="<<(void*)&s[i]<<endl;
}

string concatStrPrint(string s1,string s2) //Concating String with appen()
{
	string s3=s1.append(s2);
	return s3;
}

string concatStrPrint1(char s1[],char s2[]) //Concating String with strcat
{
	strcat(s1,s2);
	return s1;
}

void compareTwoString(string s1,string s2) //Comparing to strings
{
	if(s1.compare(s2)<0)
		cout<<s1<<" is smaller than "<<s2<<endl;
	else if(s1.compare(s2)==0)
		cout<<s1<<" is equal to "<<s2<<endl;
	else
		cout<<"Strings don't match"<<endl;
}

int calcLength(char* s) //Calculating Length using pointer
{
	int ctr;
	while(*s!='\0')
	{
		ctr++;
		s++;
	}
	return ctr;
}

string lowToUp(string s) //String Lower Case to Upper Case
{
	string s1;
	for(int i=0;i<s.length();i++)
		s1=s1+(char)toupper((s.at(i))); 
	return s1;
}

string upToLow(string s) //String Upper Case to Lower Case
{
	string s1;
	for(int i=0;i<s.length();i++)
		s1=s1+(char)tolower((s.at(i))); 
	return s1;
}

int countVowel(string s) //Counting Number of Vowels
{
	int ctr=0;
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)=='a'||s.at(i)=='e'||s.at(i)=='i'||s.at(i)=='o'||s.at(i)=='u'||s.at(i)=='A'||s.at(i)=='E'||s.at(i)=='I'||s.at(i)=='O'||s.at(i)=='U')
			ctr++;
	}
	return ctr;
}

string reverse(string s)   //Function to reverse String 
{ 
    string str; 
    for(int i=s.length()-1;i>=0;i--)  
        str+=tolower(s.at(i));         //Converting string to lower case and reversing 
    return str; 
} 

void printOperations(string s,string s1,char a[],char b[],int ch) //Function to print 
{
A:	switch(ch)
	{
		case 1:
			{
				cout<<"Enter the string"<<endl;
				cin>>s;
				cout<<"Position of every character of string 1"<<endl;
				printCharPos(s);
				break;
			}
		case 2:
			{
				cout<<"Enter first string"<<endl;
				cin>>s;
				cout<<"Enter second string"<<endl;
				cin>>s1;
				cout<<"Concating String without strcat"<<endl;
				cout<<concatStrPrint(s,s1);
				break;
			}
		case 3:
			{
				cout<<"Enter first string"<<endl;
				cin>>a;
				cout<<"Enter second string"<<endl;
				cin>>b;
				cout<<"Concating String with strcat"<<endl;
				cout<<concatStrPrint1(a,b);
				break;
			}
		case 4:
			{
				cout<<"Enter first string"<<endl;
				cin>>s;
				cout<<"Enter second string"<<endl;
				cin>>s1;
				cout<<"Comparing two strings"<<endl;
				compareTwoString(s,s1);
				break;
			
			}
		case 5:
			{
				cout<<"Enter first string"<<endl;
				cin>>a;
				cout<<"Length of string "<<endl;
				cout<<calcLength(a);
				break;
			}
		case 6:
			{
				cout<<"Enter the string"<<endl;
				cin>>s;
				cout<<"Converting string to Upper Case"<<endl;
				cout<<lowToUp(s);
				break;
			}					
		case 7:
			{
				cout<<"Enter the string"<<endl;
				cin>>s;
				cout<<"Converting string to Lower Case"<<endl;
				cout<<upToLow(s);
				break;
			}
		case 8:
			{
				cout<<"Enter the string"<<endl;
				cin>>s;
				cout<<"Number of vowels in string="<<countVowel(s)<<endl;
				break;
			}
		case 9:
			{
				cout<<"Enter the string"<<endl;
				cin>>s;
				cout<<"Reversed String of String="<<reverse(s);
				break;
			}	
		default:
			{
				cout<<"\n Wrong Choice"<<endl;
			}	
	}
}

int main()
{
	int ch;
	string s,s1;
	char a[50],b[50];
	cout<<"Enter the choice \n 1 for calculating positions \n 2 for concating without strcat \n 3 for concating with strcat \n 4 for comparing 2 strings \n 5 to calculate length of string using pointer\n 6 for converting string to upper case\n 7 for converting string to lower case\n 8 to count number of vowels \n 9 to reverse the string "<<endl;
	cin>>ch;
	printOperations(s,s1,a,b,ch);	
	return 1;
}
