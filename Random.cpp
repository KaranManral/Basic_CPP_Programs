#include <iostream>
#include <cstdlib>

using namespace std;

int Random(int a,int b)              //Making Random Numbers
{
	int random=rand()%(b+1);                   //Ensuring random number is less than Max Limit.
	if(random>=a)               //Ensuring random number is more than Min Limit.
		return random;
	else
		return Random(a,b);
}

int main()
{
	int a,b;
	Repeat:	cout<<"Enter lower range"<<endl;
	cin>>a;
	cout<<"Enter upper range"<<endl;
	cin>>b;
	if(a>b)
	{
		cout<<"INVALID RANGE"<<endl;
		cout<<"Re-Enter the range"<<endl;
		goto Repeat;
	}
	else
	{
		cout<<"Threee Random Numbers are:"<<endl;
		for(int i=0;i<3;i++)
		cout<<Random(a,b)<<",";
	}
	return 1;
}
