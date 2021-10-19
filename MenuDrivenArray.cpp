//WAP to perform follwing action on an array.

#include <iostream>

using namespace std;

bool checkEven(int num) //Function to check if number is even or not
{
	if(num%2==0)
		return true;
	else 
		return false;	
}

void printEvenElements(int a[],int n) //Function to print even elements of array
{
	cout<<"Even elements of array are: ";
	for(int i=0;i<n;i++)
		if(checkEven(a[i]))
			cout<<a[i]<<"  ";
}

void printOddElements(int a[],int n) //Function to print odd elements of array
{
	cout<<"Odd elements of array are: ";
	for(int i=0;i<n;i++)
		if(checkEven(a[i])==false)
			cout<<a[i]<<"  ";
}

int sum(int a[],int n) //Function to find sum of elements
{
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=a[i];
	return sum;	
}

double average(int a[],int n) //Function to find average of elements
{
	return (sum(a,n)/(double)n);
}

void printSumAvg(int a[],int n) //Function to print sum and average of elements
{
	cout<<"Sum of elements of array= "<<sum(a,n)<<endl;
	cout<<"Average of elements of array= "<<average(a,n)<<endl;
}

void printMaxMin(int a[],int n) //Function to find maximum and minimum element of array
{
	int max=a[0],min=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];	
	}
	cout<<"Maximum Element= "<<max<<endl;
	cout<<"Minimum Element= "<<min<<endl;
}

int removeDuplicate(int a[],int n) //Removing duplicate elements from array
{
	if(n==0||n==1)
		return n;
	int temp[n],j=0;
	for(int i=0;i<n-1;i++)
		if(a[i+1]!=a[i])
			temp[j++]=a[i];
	temp[j++]=a[n-1];
	for(int k=0;k<j;k++)
		a[k]=temp[k];
	return j;		
}

void sortAscending(int a[],int n) //Function to sort array in ascending order using selection sort
{
	int min,p;
	for(int i=0;i<n;i++)
	{
		p=i;
		min=a[i];
		for(int j=i+1;j<n;j++)
			if(a[j]<min)
			{
				min=a[j];
				p=j;
			}
		a[p]=a[i];			
		a[i]=min;
	}
}

void printRemovedArr(int a[],int n)  //Function to print array after removing duplicate elements
{
	cout<<"Array after removing duplicates:";
	sortAscending(a,n);
	int temp=removeDuplicate(a,n);
	for(int i=0;i<temp;i++)
		cout<<a[i]<<" ";
}

void reverseArray(int a[],int n) //Function to reverse Array
{
	int temp,no=n;
	for(int i=0;i<no;i++,no--)
	{
		temp=a[i];
		a[i]=a[no-1];
		a[no-1]=temp;
	}
	cout<<"Reversed Array=";
	for(int k=0;k<n;k++)
		cout<<a[k]<<" ";
}

void input(int a[],int n)
{
	cout<<"Enter the elements of array"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
}

int main()
{
	int n,ch;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int a[n];
	input(a,n);	//Calling input() function
	A:cout<<"Enter the choice accordingly \n 1 for printing even elements \n 2 for printing odd elements \n 3 for printing sum and average of elements \n 4 for printing maximum and minimum elements of array \n 5 for printing array after removing duplicate elements \n 6 for printing array after reversing"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				printEvenElements(a,n);
				break;
			}
		case 2:
			{
				printOddElements(a,n);
				break;
			}
		case 3:
			{
				printSumAvg(a,n);
				break;
			}
		case 4:
			{
				printMaxMin(a,n);
				break;
			}
		case 5:
			{
				printRemovedArr(a,n);
				break;
			}
		case 6:
			{
				reverseArray(a,n);
				break;
			}
		default:
			{
				cout<<"\n Wrong Choice \n"<<endl;
				goto A;
			}						
	}
	return 1;	
}
