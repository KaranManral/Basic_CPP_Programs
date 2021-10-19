#include <iostream>

using namespace std;

void increment(int,int);
void increment1(int&,int&);

int main()
{
	int x=2,y=4;
	increment(x,y);
	cout<<x<<"\t"<<y<<endl;
	x=2;y=4;
	increment1(x,y);
	cout<<x<<"\t"<<y;
	return 1;
}

void increment(int n1,int n2)
{
	n1++;
	n2++;
	return;
}

void increment1(int& n1,int& n2)
{
	n1++;
	n2++;
	return;
}
