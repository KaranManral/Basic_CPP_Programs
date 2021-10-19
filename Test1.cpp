#include <iostream>

using namespace std;

void input(int a[])     //Inputting the numbers in an array.
{
	for(int i=0;i<9;i++)
	cin>>a[i];
}

void print(int a[])     //Printing the numbers in three different rows.
{
	for(int i=1;i<=9;i++)
	{
		if(i%3!=0)
			cout<<a[i-1]<<" , ";
		else
			cout<<a[i-1]<<endl;
	}
}

int main()
{
	int num[9];
	cout<<"Enter 9 numbers"<<endl;
	input(num);
	cout<<"Your numbers are:"<<endl;
	print(num);
	return 1;
}
