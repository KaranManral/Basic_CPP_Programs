#include <iostream>
#include <iomanip>

using namespace std;

class Account
{
	private:double balance;
	public: double deposit(double bal);
			double withdraw(double bal);
};

double Account::deposit(double bal)
		 {
		 	balance=bal;
		 	double dep;
			cout<<"Enter the amount to be deposited"<<endl;
			cin>>dep;
			return (balance+dep);
		 }
double Account::withdraw(double bal)
		 {
		 	balance=bal;
		 	double temp,withdraw;
		  A:cout<<"Enter the amount to be withdrawed"<<endl;
			cin>>withdraw;
			temp=balance-withdraw;
			if(temp<0)
			{
				cout<<"Withdrawal amount is more than remaining balance"<<endl;
				goto A;
			}
			else
				balance=temp;
			return balance;	
		 }		 
		 
int main()
{
	Account ob;
	int ch;
	double balance;
	cout<<"Enter your account balance"<<endl;
	cin>>balance;
B:	cout<<"Enter the choice: \n 1 for Deposit \n 2 for Withdrawal \n 3 to check balance"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				cout<<"Account balance after Deposit = Rs"<<ob.deposit(balance);
				break;
			}
		case 2:
			{
				cout<<"Account balance after Withdrwal = Rs"<<ob.withdraw(balance);
				break;
			}
		case 3:
			{
				cout<<"Account balance = Rs"<<balance;
				break;
			}
		default:
			{
				cout<<"Wrong Choice,Please re-enter the choice"<<endl;
				goto B;
			}			
	}
}	


