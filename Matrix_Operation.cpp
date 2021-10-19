//WAP to create a Matrix and perform following actions on it

#include <iostream>
#include <iomanip>
#define maxC 10
#define maxR 10

using namespace std;

class Operation
{
	private: int a[maxR][maxC],M,N;
	public: Operation(int m,int n)
			{
				M=m;
				N=n;
			}
			Operation()
			{
				M=0;
				N=0;
			}
			Operation Add(Operation A);
			Operation Sub(Operation A);
			Operation Pro(Operation A);
			Operation Trans();
			void const display();
			void inputArray(); 
};

Operation Operation::Add(Operation A)  //Add Function to add two similar matrices
{
	if(M!=A.M||N!=A.N)
	{
		cout<<"Matrices cannot be added"<<endl;
		exit(0);
	}
	Operation B(M,N);
	for(int r=0;r<M;r++)
		for(int c=0;c<N;c++)
			B.a[r][c]=a[r][c]+A.a[r][c];
	return B;		
}

Operation Operation::Sub(Operation A) //Subtract Function to Subtract two similar matrices
{
	if(M!=A.M||N!=A.N)
	{
		cout<<"Matrices cannot be Subtracted"<<endl;
		exit(0);
	}
	Operation B(M,N);
	for(int r=0;r<M;r++)
		for(int c=0;c<N;c++)
			B.a[r][c]=a[r][c]-A.a[r][c];
	return B;		
}

Operation Operation::Pro(Operation A) //Function to multiply two matrices
{
	if(N!=A.M)
	{
		cout<<"Matrices cannot be multiplied"<<endl;
		exit(0);
	}
	Operation B(M,A.N);
	for(int r=0;r<M;r++)
	{
		int d=0;
		for(int c=0;c<A.N;c++)
			B.a[r][c]=(a[r][d]*A.a[d][c])+(a[r][d+1]*A.a[d+1][c]);
	}
	return B;		
}

Operation Operation::Trans() //Function to create Transpose of a Matrix
{
	Operation B(N,M);
	for(int r=0;r<N;r++)
		for(int c=0;c<M;c++)
			B.a[r][c]=a[c][r];
	return B;
}

void Operation::inputArray() //Function to take input in Matrix
{
	cout<<"Enter elements"<<endl;
	for(int r=0;r<M;r++)
		for(int c=0;c<N;c++)
			cin>>a[r][c];
}

void const Operation::display() //Function to display Matrix
{
	for(int r=0;r<M;r++)
	{
		for(int c=0;c<N;c++)
			cout<<a[r][c]<<"\t";
		cout<<endl;
	}
}

int main()
{
	int a[maxR][maxC],M1,N1,M2,N2;
	int ch;
	cout<<"Enter row size of 1'st Matrix"<<endl;
	cin>>M1;
	cout<<"Enter column size of 1'st Matrix"<<endl;
	cin>>N1;
	Operation ob1(M1,N1);
	ob1.inputArray();
	cout<<"Enter row size of 2'nd Matrix"<<endl;
	cin>>M2;
	cout<<"Enter column size of 2'nd' Matrix"<<endl;
	cin>>N2;
	Operation ob2(M2,N2);
	ob2.inputArray();
A:	cout<<"Enter the choice \n 1 for Addition \n 2 for Subtraction \n 3 for Multiplication \n 4 for Transpose"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
		{
			Operation ob3=ob1.Add(ob2);
			cout<<"1's Matrix"<<endl;
			ob1.display();
			cout<<"\n 2'nd Matrix"<<endl;
			ob2.display();
			cout<<"\n Added Matrix"<<endl;
			ob3.display();
			break;
		}
		case 2:
		{
			Operation ob3=ob1.Sub(ob2);
			cout<<"1's Matrix"<<endl;
			ob1.display();
			cout<<"\n 2'nd Matrix"<<endl;
			ob2.display();
			cout<<"\n Subtracted Matrix"<<endl;
			ob3.display();	
			break;
		}
		case 3:
		{
			Operation ob3=ob1.Pro(ob2);
			cout<<"1's Matrix"<<endl;
			ob1.display();
			cout<<"\n 2'nd Matrix"<<endl;
			ob2.display();
			cout<<"\n Multiplied Matrix"<<endl;
			ob3.display();
			break;
		}	
		case 4:
		{
			Operation ob3=ob1.Trans();
			Operation ob4=ob2.Trans();
			cout<<"1's Matrix"<<endl;
			ob1.display();
			cout<<"\n 2'nd Matrix"<<endl;
			ob2.display();
			cout<<"\n Transpose Matrix 1"<<endl;
			ob3.display();
			cout<<"\n Transpose Matrix 2"<<endl;
			ob4.display();
			break;
		}	
		default:
		{
			cout<<"WRONG CHOICE,RE-Enter"<<endl;
			goto A;
		}	
	}
	return 1;	
}
