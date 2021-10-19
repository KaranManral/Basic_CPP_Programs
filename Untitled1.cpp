#include <iostream>
#include <iomanip>
#define maxc 5

using namespace std;

void readArr(int a[][maxc],int maxr)
{
	cout<<"Enter elements"<<endl;
	for(int r=0;r<maxr;r++)
		for(int c=0;c<maxc;c++)
			cin>>a[r][c];
}

void printArr(int a[][maxc],int maxr)
{
	for(int r=0;r<maxr;r++)
	{
		for(int c=0;c<maxc;c++)
			cout<<a[r][c]<<"\t";
		cout<<endl;	
	}
}

int main()
{
	int maxr=4;
	int a[maxr][maxc];
	readArr(a,maxr);
	printArr(a,maxr);	
	return 1;
} 

