#include <iostream>

using namespace std;

void getIncomeData(int& income,int& tax,int& dependent)     //Collecting Data from user
{
	cout<<"Enter total income"<<endl;
	cin>>income;
	cout<<"Enter tax paid"<<endl;
	cin>>tax;
	cout<<"Enter number of dependents"<<endl;
	cin>>dependent;
}

double calculateTax(int income,int dependent)            //Calculating Taxes
{
	double ttax,taxI;
	taxI=income-(1000*dependent);
	if(taxI<10001)                                              //Taxable Income upto 10000
		ttax=.02*taxI;
	else if(taxI<=20000)										//Taxable Income upto 20000
		ttax=200+(.05*(taxI-10000));
	else if(taxI<=30000)										//Taxable Income upto 30000
		ttax=700+(.07*(taxI-20000));
	else if(taxI<=40000)										//Taxable Income upto 40000
		ttax=1400+(.1*(taxI-30000));
	else
		ttax=2400+(.15*(taxI-40000));							//Taxable Inacome above 50000
	return ttax;
}

void print(int income,int tax,int dependent)         //Printing Data
{
	double dtax=calculateTax(income,dependent)-tax;
	if(dtax>0)
		cout<<"The tax to be paid=Rs "<<dtax<<endl;
	else
		cout<<"The money to be refunded=Rs "<<(-dtax)<<endl;
}

int main()                          //main function
{
	int income,dependent,tax;
	getIncomeData(income,tax,dependent);              //Calling getIncomeData
	calculateTax(income,dependent);					//Calling calculateTax
	print(income,tax,dependent);					//Calling print
	return 1;
}
