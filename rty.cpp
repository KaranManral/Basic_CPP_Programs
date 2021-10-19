//WAP to print following pattern
#include <iostream>

using namespace std;

void printPattern()
{
	for(int r=0;r<5;r++)
	{
		for(int c=65;c<=69-r;c++)
			cout<<(char)c;
		for(int i=1;i<=r*2-1;i++)
			cout<<" ";	
		if(r==0)
			cout<<"\b";	
		for(int j=69+r;j<=73;j++)
			cout<<(char)j;		
		cout<<endl;	
	}
}

int main()
{
	printPattern();
}
