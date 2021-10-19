// WAP to print number in Indian and Internation number system.

#include <iostream>


using namespace std;

void printIndianSystem(long int n)
{
	int no=n,c=0,i=0;   //c is for counting digits and i to fill array.
	while(no>0)        //Counting Number of digits.
	{
		c++;
		no/=10;
	}	
	int num[c];
	while(n>0)        //Extracting digits and putting them in array.
	{
		num[i]=n%10;
		i++;
		n/=10;
	}
	for(int j=(c-1);j>=0;j--)                //Printing commas as in Indian NUmber System
	{
		cout<<num[j];	
		if((j-1)%2==0&&(j-1)!=0)         
			cout<<",";
	}
}

void printInternationalSystem(int n)
{
	int no=n,c=0,i=0;
	while(no>0)          //Counting Number of Digits
	{
		c++;
		no/=10;
	}	
	int num[c];
	while(n>0)          //Extracting digits and putting them in array.
	{
		num[i]=n%10;
		i++;
		n/=10;
	}
	for(int j=(c-1);j>=0;j--)              //Printing commas as in International NUmber System
	{
		cout<<num[j];                
		if(j%3==0)
			cout<<",";	
	}
	cout<<"\b ";                          //Removing last comma
}

int main()
{
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	cout<<"\n The number in Internation system:-"<<endl;
	printInternationalSystem(num);
	cout<<"\n The number in Indian system:-"<<endl;
	printIndianSystem(num);
	return 1;
}
