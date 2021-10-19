#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

void readFile(ifstream& infile)
{
	int i=0,a;
	char ch;
	string s[200]={""},str;
	infile.open("Test140.txt");
	if(!infile)
	{
		cout<<"Error 100 in opening file"<<endl;
		exit(100);
	}
	while(infile.get(ch))
	{
		getline(infile,s[i++],'\n');
	}
	infile.close();
	if(infile.bad())
	{
		cout<<"Error 101 in closing file"<<endl;
		exit(101);
	}
	for(int j=0;j<i;j++)
	{
		a=0;
		cout<<"\n Line "<<(j+1)<<endl;
		for(int k=0;k<(s[j].length()-1);k++)
		{
			if(s[j].at(k)==' '||s[j].at(k)=='.'||s[j].at(k)=='?'||s[j].at(k)=='!')
			{
				cout<<s[j].substr(a,k-a)<<endl;
			    a=k+1;	
			}
		}
	}
}

int main()
{
	ifstream infile;
	readFile(infile);
	return 1;
}
