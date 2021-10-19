//WAP to print followint Pattern
#include <iostream>
#include <iomanip>

using namespace std;

void print(int n)             //Function to print given pattern
{
	int c=1;
	int k;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=n-i;j++)
			cout<<" ";
		for(k=0;k<=i;k++)
		{
			if(i==0||k==0)
				c=1;
			else
				c=c*(i-k+1)/k;	
			cout<<" "<<c;		 
		}
		cout<<endl;			
	}
}

int main()
{
	int n;
	cout<<"Enter the number of lines to be printed in pattern"<<endl;
	cin>>n;           //Taking Limit of pattern rows
	print(n);
	return 1;
}
