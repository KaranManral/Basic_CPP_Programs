//WAP to print stars.  

#include <iostream>  

using namespace std;  

 

int main()  

 {  

       int m,n;  

       cout<<"Enter the number of rows"<<endl;  

       cin>>n;  

       for(int i=1;i<=n;i++)             //Loop for rows 

      {  

              for(int j=i;j<=n;j++)     //Loop for columns 

              {  

                      cout<<" ";  

               }  
               for(int k=1;k<=i;k++)
				cout<<"*";
             cout<<endl;                    //Changing Line 

       }  

      return 1;  

 }  
