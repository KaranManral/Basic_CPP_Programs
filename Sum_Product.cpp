//WAP to print the sum and product of digits of an integer.

#include <iostream>

using namespace std;

void sumProduct(int num,int& sum,int& pro)  //To Calculate Sum and Product
{
	int rem;
	while(num>0)
	{
		rem=num%10;  //Extracting last digit of number.
		sum+=rem;    //Calculating Sum
		pro*=rem;    //Calculating Product
		num/=10;
	}
	return;	
}

int main()
{
	int num,sum=0,pro=1;
	cout <<"Enter a number\n";
	cin >>num;        //Inputting the number
	sumProduct(num,sum,pro);
	cout <<"Sum="<<sum<<endl;
	cout <<"Product="<<pro;
	return 1;
}
