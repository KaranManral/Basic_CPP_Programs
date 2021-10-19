#include <iostream>

using namespace std;

void swap(int&,int&);

int main()
{
	int x=2,y=5;
	cout<<x<<"\t"<<y<<endl;
	swap(x,y);
	cout<<x<<"\t"<<y;
	return 1;
}

void swap(int& n1,int& n2)
{
	int temp=n1;;
	n1=n2;
	n2=temp;
	return;
}

