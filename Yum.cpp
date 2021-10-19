#include <iostream>
#include <iomanip>
#define maxC 1000
#define maxR 1000

using namespace std;

class Relation
{
	private: char* a,*b;  //Arrays to store elements of two sets
			int size,size1,m[maxR][maxC]; //int type variables to take size of arrays and an 2D array to create Relation Matrix
			char r[maxR][2]; //2D matrix to take input of Relation
						
			int search(char arr[], int n, int x) //Linear Search function to search element in char array
			{
 				for (int i = 0; i < n; i++)
        			if (arr[i] == x)
            			return i;
   				return -1;
			}
			
	public:	Relation()//Default Constructor
			{
				size=0;
				a=new char[size];
				size1=0;
				b=new char[size1];
			}
			Relation(int s,int s1) //Parameterised Constructor
			{
				size=s;
				a=new char[size];
				size1=s1;
				b=new char[size1];
			}	
			void inputSet1()//Function to take input in set 1
			{
				cout<<"Enter elements of the set 1"<<endl;
				for(int i=0;i<size;i++)
					cin>>a[i];	
			}
			void inputSet2()//Function to take input in set 2
			{
				cout<<"Enter elements of the set 2"<<endl;
				for(int i=0;i<size1;i++)
					cin>>b[i];	
			}
			void onlySet()//Function to create 2nd set same as 1st in case user didn't input second set
			{
				for(int i=0;i<size;i++)
					b[i]=a[i];
			}
			void inputRelation() //Function to take relation order pairs from user
			{
				int t;
				cout<<"Enter the number of ordered pairs in the relation"<<endl;
				cin>>t;
				for(int i=0;i<t;i++)
				{
						cout<<"\n Enter Ordered pair "<<(i+1)<<endl;
						cin>>r[i][0];
						cin>>r[i][1];
				}
			}
			
			void createMatrix() //Function to create Relation Matrix
			{
				int n,o;
				for(int i=0;i<(sizeof r/sizeof r[0]);i++)
				{
					n=search(a,size,r[i][0]);
					o=search(b,size1,r[i][1]);
					if(n!=-1)
						if(o!=-1)
							m[n][o]=1;	
				}
				for(int i=0;i<size;i++)
					for(int j=0;j<size1;j++)
						if(m[i][j]!=1)
							m[i][j]=0;
			}
			
			void displayMatrix()  //Function to display Relation Matrix
			{
				cout<<"\n Relation Matrix is:"<<endl;
				for(int i=0;i<size;i++)
				{
					for(int j=0;j<size1;j++)
						cout<<m[i][j]<<"\t";
					cout<<endl;	
				}
			}
			bool checkReflexive() //Function to check Reflexivity
			{
				for(int i=0;i<size;i++)
					if(m[i][i]!=1)
						return false;
				return true;		
			}
			bool checkSymmetric() //Function to check if relation is symmetric or not
			{
				Relation B(size1,size);
				for(int r=0;r<size1;r++)
					for(int c=0;c<size;c++)
						B.m[r][c]=m[c][r];
				for(int i=0;i<size;i++)
					for(int j=0;j<size1;j++)
						if(m[i][j]!=B.m[i][j])
							return false;
				return true;			
			}
			bool checkAntiSymmetric() //Function to check if relation is anti-symmetric or not
			{
				for(int i=0;i<size;i++)
					for(int j=0;j<size1;j++)
					{
						if(i!=j)
						{
							if(m[i][j]==0||m[j][i]==0)
								continue;
							else
								return false;	
						}
					}
				return true;	
			}
			bool checkTransitive() //Function to check if relation is transitive or not
			{
				Relation ob(size,size1);
				for(int r=0;r<size;r++)
				{
					for(int c=0;c<size1;c++)
					{
						ob.m[r][c]=0;
						for(int k=0;k<size1;k++)
							ob.m[r][c]+=m[r][k]*m[k][c];
					}
				}
				for(int i=0;i<size;i++)
					for(int j=0;j<size1;j++)
						if(ob.m[i][j]>1)
							ob.m[i][j]=1;
				for(int i=0;i<size;i++)
					for(int j=0;j<size1;j++)
						if(ob.m[i][j]!=m[i][j])
							return false;		
				return true;		
			}
			bool checkEquivalence() //Function checks if relation is equivalent
			{
				if(checkReflexive())
					if(checkSymmetric())
						if(checkTransitive())
							return true;
				return false;			
			}
			bool checkPartialOrderRelation()//Function to check if is a partial order relation
			{
				if(checkReflexive())
					if(checkAntiSymmetric())
						if(checkTransitive())
							return true;
				return false;			
			}
};

int main()
{
	int s1,s2,ch,i=0,j;
	cout<<"Enter the size of Set 1"<<endl;
	cin>>s1;
	cout<<"Do you want to enter Set 2? 1 for yes,0 for no"<<endl;
	cin>>j;
	if(j==1)
	{
		cout<<"Enter the size of Set 2"<<endl;
		cin>>s2;
	}
	else
		s2=s1;
	Relation ob(s1,s2);
	ob.inputSet1();
	if(j==1)
		ob.inputSet2();
	else
		ob.onlySet();	
	ob.inputRelation();
	ob.createMatrix();
	ob.displayMatrix();
	cout<<" 1 to check if relation is reflexive \n 2 to check if relation is Symmetric \n 3 to check if relation is Anti-symmetric \n 4 to check if relation is Transitive \n 5 to check if relation is Equivalent \n 6 to check if relation is Partial Order relation \n 7 to exit program"<<endl;
	do
	{
		cout<<"Enter choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					if(ob.checkReflexive())
						cout<<"Relation is Reflexive"<<endl;
					else
						cout<<"Relation is not Reflexive"<<endl;	
					break;
				}
			case 2:
				{
					if(ob.checkSymmetric())
						cout<<"Relation is Symmetric"<<endl;
					else
						cout<<"Relation is not Symmetric"<<endl;
					break;
				}
			case 3:
				{
					if(ob.checkAntiSymmetric())
						cout<<"Relation is Anti-Symmetric"<<endl;
					else
						cout<<"Relation is not Anti-Symmetric"<<endl;
					break;
				}
			case 4:
				{
					if(ob.checkTransitive())
						cout<<"Relation is Transitive"<<endl;
					else
						cout<<"Relation is not Transitive"<<endl;
					break;
				}
			case 5:
				{
					if(ob.checkEquivalence())
						cout<<"Relation is Equivalent"<<endl;
					else
						cout<<"Relation is not Equivalent"<<endl;
					break;
				}
			case 6:	
				{
					if(ob.checkPartialOrderRelation())
						cout<<"It is a Partial Order Relation"<<endl;
					else
						cout<<"It is not a Partial Order Relation"<<endl;
					break;
				}
			case 7:
				{
					cout<<"Program will now exit"<<endl;
					i=1;
					exit(0);
				}
			default:
			{
				cout<<"Wrong choice entered,Re-enter the choice"<<endl;
			}	
		}
		cout<<"To run program again,Enter 0 else enter 1 to exit"<<endl;
		cin>>i;
	}while(i!=1);
	return 1;
}
