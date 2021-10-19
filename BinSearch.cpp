//WAP to implement Binary search using recursion

#include <iostream>
#include <iomanip>

using namespace std;

void sort(int arr[],int size) //Function to sort array in ascending order
{
		int min,temp;
   		for(int i=0;i<size-1;i++)
        {
         	min=i;
        	for(int j=i+1;j<size;j++)
            if(arr[j]<arr[min])
                min=j;
            //Swaping elements	
        	temp=arr[min];
        	arr[min]=arr[i];
        	arr[i]=temp;
       	}
}

void input(int a[],int n) //Function to take input in array
{
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
}

int binSearch(int a[],int l,int u,int s)  //Recursive function for binary search in array in ascending order
{
	int avg=(l+u)/2;
	if(l>=u)    //If lower limit equals or exceeds upper limit then element not found
		return -1;
	if(s==a[avg])  //If element found then returning position
		return avg;
	else if(s<a[avg])  //If element is less than element at avg position then upper limit is changed
		return binSearch(a,l,avg-1,s);
	else
		return binSearch(a,avg+1,u,s);//If element is more than element at avg position then lower limit is changed		
}

int main()
{
	int i=1;
	do
	{
		int n,s;
		cout<<"Enter the size of the array"<<endl;
		cin>>n;
		int a[n];
		input(a,n);
		cout<<"Enter the searching element"<<endl;
		cin>>s;
		sort(a,n);
		int t=binSearch(a,0,n-1,s);
		if(t==-1)
			cout<<"Element not found in the array"<<endl;
		else
			cout<<"Element found in array"<<endl;
		cout<<"Do you want to run program again? Enter 1 to run again,0 to exit"<<endl;
		cin>>i;
	}while(i==1);
	return 1;
}
