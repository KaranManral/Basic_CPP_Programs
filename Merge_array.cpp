//WAP to Merge two sorted Arrays

#include <iostream>
#include <iomanip>
#define max 100
using namespace std;

class Merge
{
	private: int a[max],size;
	public : Merge()
				{
					size=0;
				}
			Merge(int s)
			{
				size=s;
			}	
			
			Merge merge(Merge A);
			void inputArray();
			void const print();
};

void Merge::inputArray() //Function to take input in array
{
	cout<<"Enter the elements in ascending order"<<endl;
	for(int i=0;i<size;i++)
		cin>>a[i];
}

void const Merge::print() //Function to print array
{
	for(int i=0;i<size;i++)
		cout<<a[i]<<"\t";
	cout<<endl;	
}

Merge Merge::merge(Merge A) //Function to merge two arrays and return merged array
{
	Merge B(size+A.size+1);
	if(A.a[0]<a[0])
	{
		for(int i=0;i<A.size;i++) 
			B.a[i]=A.a[i];
		int d=A.size,k;
		for(int i=0;i<size;i++)
		{
			k=0;
			for(int j=0;j<A.size;j++)
			{
				if(A.a[j]==a[i])
				k++;
			}
			if(k==0)
				B.a[d++]=a[i];
			B.size=d;	
		}
	}
	else
	{
		for(int i=0;i<size;i++)
			B.a[i]=a[i];
		int d=size,k;
		for(int i=0;i<A.size;i++)
		{
			k=0;
			for(int j=0;j<size;j++)
			{
				if(a[j]==A.a[i])
				k++;
			}
			if(k==0)
				B.a[d++]=A.a[i];
			B.size=d;	
		}
	}
	return B;
}

int main()
{
	int a[max],s,s1;
	cout<<"Enter the size of array 1"<<endl;
	cin>>s;
	Merge ob1(s);
	ob1.inputArray();
	cout<<"Enter the size of array 2"<<endl;
	cin>>s1;
	Merge ob2(s1);
	ob2.inputArray();
	Merge ob3=ob2.merge(ob1);	
	cout<<"Array 1"<<endl;
	ob1.print();	
	cout<<"Array 2"<<endl;
	ob2.print();
	cout<<"Merged Array"<<endl;
	ob3.print();		
	return 1;
}
