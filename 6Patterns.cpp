/*WAP to print following Patterns
1)     *      2)*         *   3)     *       4)     1          5)     1				6) ABCDEFGHI
      ***       **       **         ***		       121			     1 1			   ABCD FGHI
     *****      ***     ***        *****          12321			    1 2 1 			   ABC   GHI
    *******     ****   ****       *******        1234321		   1 3 3 1			   AB     HI
   *********	***** *****	       *****        123454321		  1 4 6 4 1			   A       I
   								    ***        12345654321		 1 5 10 10 5 1
   								     *                                                                       */
   								     
#include <iostream> 
#include <iomanip>

using namespace std; 
  
void print1(int n) 
{ 
    for(int i=1;i<=n;i++) 
    { 
        for(int k=n;k>=i;k--)                             //Printing Spaces 
            cout<<" "; 
        for(int j=1;j<=(i*2-1);j++)          //Printing Stars 
            cout<<"*"; 
        cout<<endl;     
    } 
} 
  
void print2(int n)             //Function to print given pattern 
{ 
    for(int i=1;i<=n;i++) 
    { 
        for(int k=1;k<=i;k++)              //Printing left side stars 
            cout<<"*";                  
        for(int j=n;j>=i;j--)             //Printing Spaces 
            cout<<" "; 
        for(int l=n;l>=i;l--)           //Printing Spaces for right stars 
            cout<<" ";  
        for(int m=1;m<=i;m++)           //Printing Right Stars 
            cout<<"*";          
        cout<<endl;     
    } 
}
  
void print3(int n)             //Function to print given pattern 
{ 
    for(int i=1;i<=n/2+1;i++)         //Printing Upper Diamond 
    { 
        for(int k=n;k>=i;k--)                   
            cout<<" "; 
        for(int j=1;j<=(i*2-1);j++) 
            cout<<"*";              
        cout<<endl;             
    } 
    for(int i=n/2;i>=1;i--)             //Printing Lower Diamond 
    { 
        for(int j=n;j>=i;j--) 
            cout<<" "; 
        for(int k=(i*2-1);k>=1;k--) 
            cout<<"*"; 
        cout<<endl; 
    } 
} 
  
void print4(int n)             //Function to print given pattern 
{ 
    int k; 
    cout<<setw(n)<<"1"<<endl; 
    for(int i=1;i<n;i++) 
    { 
        for(int j=n-1;j>i;j--) 
            cout<<" "; 
        for(k=1;k<=i;k++) 
            cout<<k;          
        for(int l=k;l>=1;l--) 
            cout<<l; 
        cout<<endl;             
    } 
}

void print5(int n)             //Function to print given pattern 
{ 
    int c=1; 
    int k; 
    for(int i=0;i<n;i++) 
    { 
        for(int j=1;j<=n-i;j++) 
            cout<<" "; 
        for(k=0;k<=i;k++) 
        { 
            if(i==0||k==0) 
                c=1; 
            else 
                c=c*(i-k+1)/k;     
            cout<<" "<<c;          
        } 
        cout<<endl;             
    } 
}  

void print6()         //Function to print pattern upto line 5 
{ 
    for(int r=0;r<5;r++)                    //Loop for rows 
    { 
        for(int c=65;c<=69-r;c++)      //Loop to print first half 
            cout<<(char)c; 
        for(int i=1;i<=r*2-1;i++)       //Loop for spaces 
            cout<<" ";     
        if(r==0) 
            cout<<"\b";                  //Removing extra E 
        for(int j=69+r;j<=73;j++)       //Loop for printing second half 
            cout<<(char)j;         
        cout<<endl;     
    } 
}

int main() 
{ 
    int n,ch; 
A:  cout<<"Enter choice: \n 1 for first pattern \n 2 for second pattern \n 3 for third pattern \n 4 for fourth pattern \n 5 for fifth pattern \n 6 for sixth pattern"<<endl;
	cin>>ch;
    switch(ch)
    {
    	case 1:
    		{
    		    cout<<"Enter the number of lines to be printed in pattern"<<endl; 
  				cin>>n; 
  				print1(n);
  				break;
			}
		case 2:
    		{
    		    cout<<"Enter the number of lines to be printed in pattern"<<endl; 
  				cin>>n; 
  				print2(n);
  				break;
			}
		case 3:
    		{
    		    cout<<"Enter the number of lines to be printed in pattern"<<endl; 
  				cin>>n; 
  				print3(n);
  				break;
			}
		case 4:
    		{
    		    cout<<"Enter the number of lines to be printed in pattern"<<endl; 
  				cin>>n; 
  				print4(n);
  				break;
			}
		case 5:
    		{
    		    cout<<"Enter the number of lines to be printed in pattern"<<endl; 
  				cin>>n; 
  				print5(n);
  				break;
			}
		case 6:
    		{
  				print6();
  				break;
			}		
		default:
			{
				cout<<"WRONG CHOICE"<<endl;
				goto A;
			}				
	}
    return 1; 
} 
