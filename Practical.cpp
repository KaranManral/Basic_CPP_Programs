/*  Name:Karan Singh Manral
    RollNo. 5755
    Date 09/03/2021

    Ques-WAP to Calculate Sum of First n Prime Numbers using functions.
*/   

#include <iostream>
#include <iomanip>

using namespace std;

bool checkPrime(int n)    //Function to check if prime 
{ 
    int ctr=0; 
    for(int i=1;i<=n/2;i++) 
    { 
        if(n%i==0)       //Checking for divisibility
            ctr++;      //Increasing counter if divisible..
    } 
    if(ctr==1) 
        return true; 
    else 
        return false;     
} 

int sumPrime(int n) //Function to Calculate sum of first n Prime Numbers
{
    int sum=0,c=0;
    for(int i=1;c!=n;i++)  //Loop running till sum of n prime numbers is calculated
    {
        if(checkPrime(i))
        {    
            sum+=i; //Calculating Sum
            c++; //Increasing count
        }
    }
    return sum;  //Returning sum
}

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;              //Taking input value of n
    cout<<"Sum of First n Prime Numbers is:"<<sumPrime(n)<<endl;  //Printing Required Result
    return 1;
}//main