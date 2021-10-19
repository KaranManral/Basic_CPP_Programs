//WAP to swap two numbers using pointers
#include <iostream>
#include <iomanip>

using namespace std;

void swap(int *a,int *b) //Swaping Function
{
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
}

int main()
{
	int a,b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	cout<<"x="<<a<<"\t y="<<b<<endl;
	swap(&a,&b);
	cout<<"Number after swaping \nx="<<a<<"\t y="<<b;
	return 1;
}
