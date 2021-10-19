//WAP to Create a Matrix and print it as stated.

#include <iostream>
#include <iomanip>
#define maxr 5

using namespace std;

void upperLeftFill(int a[][maxr],int n) //Filling upper left part of matrix with 1's
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
			a[i][j]=1;
	}
}

void upperRightFill(int a[][maxr],int n) //Filling upper right part of matrix with 1's
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
			a[i][j]=1;
	}
}

void lowerRightFill(int a[][maxr],int n) //Filling lower right part of matrix with 1's
{
	for(int r=0;r<n;r++)
	{
		for(int c=n-1;c>=n-1-r;c--)
			a[r][c]=1;
	}
}

void lowerLeftFill(int a[][maxr],int n) //Filling lower left part of matrix with 1's
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
			a[i][j]=1;
	}
}

void print(int a[][maxr],int n) //Printing the matrix
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)	
			cout<<a[i][j]<<"\t";
		cout<<endl;		
	}
}

int main()
{
	int size;
	char ch,ch1;
	cout<<"Enter size of matrix"<<endl;
	cin>>size;
	do
	{
		int matrix[maxr][maxr]={0};
		cout<<"Enter 1 for Upper Left Diagonal \nEnter 2 for Upper Right Diagonal \nEnter 3 for Lower Left Diagonal \nEnter 4 for lower Right Diagonal"<<endl;
		cin>>ch1;
		switch(ch1)
		{
			case '1':
			{
				cout<<"Matrix with 1's in upper left diagonal"<<endl;
				upperLeftFill(matrix,size);
				break;
			}
			case '2':
			{	
				cout<<"Matrix with 1's in upper right diagonal"<<endl;
				upperRightFill(matrix,size);
				break;
			}
			case '3':
			{
				cout<<"Matrix with 1's in lower left diagonal"<<endl;
				lowerLeftFill(matrix,size);
				break;
			}
			case '4':
			{
				cout<<"Matrix with 1's in lower right diagonal"<<endl;
				lowerRightFill(matrix,size);
				break;
			}
		}
		print(matrix,size);
		cout<<"Do you want to print again? Enter y for yes"<<endl;
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 1;
}
