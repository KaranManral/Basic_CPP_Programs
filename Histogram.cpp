//WAP to print Horizontal and Vertical Histogram with Frequency Table.

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

bool isAlpha(char ch)  //Function to check if character is alphabet.
{
	if(ch>=97&&ch<=122)
		return true;
	else if(ch>=65&&ch<=90)
		return true;
	else
		return false;		
}

char toLower(char ch)  //Function to convert character to lower case.
{
	if(ch>=65&&ch<=90)
		ch=ch+32;
	return ch;	
}

void generate_freq(ifstream& ifile,int ctr[])     //Generating Frequency from Text file
{
	char ch,ch1;
	ifile.open("Test.txt");
	if(!ifile)
	{
		cout<<"Error 100 : Opening File"<<endl;
		exit(100);
	}
	while(ifile.get(ch))
	{
		if(isAlpha)
		{
		ch1=toLower(ch);
		ctr[(int)ch1-97]++;       //Counting frequency of letters
		}
	}
	ifile.close();
	if(ifile.bad())
	{
		cout<<"Error 102:Closing file"<<endl;
		exit(102);
	}	
}

void printTable(int a[])     //Function to print Frequency Table
{
	cout<<"Frequency Table \n\nLetter \t"<<(char)179<<" Frequency"<<endl;
	for(int i=1;i<=26;i++)
		cout<<(char)(i+96)<<"\t"<<(char)179<<a[i-1]<<endl;
}

void print_horiz_histo(int ctr[])     //Function to print Horizontal Histogram
{
	cout<<"\n Horizontal Histogram \n"<<endl;
	for(int i=1;i<=26;i++)
	{
		cout<<setw(3)<<(char)(i+96)<<(char)179;
		for(int j=1;j<=ctr[i-1];j++)
			cout<<"*";
		cout<<endl;
	}
}

void print_vert_histo(int ctr[])   //Function to print Vertical Histogram
{
	cout<<"\n Vertical Histogram \n"<<endl;
	for(int i=25;i>=0;i--)
	{
		for(int j=0;j<26;j++)
		{
			if(ctr[j]-i>0)
				cout<<"* ";
			else 
				cout<<"  ";
		}
		cout<<endl;	
	}
	for(int k=0;k<26*2;k++)
		cout<<(char)196;
	cout<<endl;	
	for(int l=0;l<26;l++)
		cout<<(char)(l+97)<<" ";	
}

int main()
{
	int a[26]={0};
	ifstream ifile;
	generate_freq(ifile,a);
	printTable(a);
	print_horiz_histo(a);
	print_vert_histo(a);
	return 1;
}//main
