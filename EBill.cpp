/* Write a program to input electricity unit charges and calculate total electricity bill according to the given condition:  
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit 
An additional surcharge of 20% is added to the bill */

#include<iostream>

using namespace std;

Ebill(double& unit)
{
	cout <<"Enter the electricity units consumed"<<endl;
	cin >>unit;
}

void lessThan50(double unit,double& bill)         //Unit Consumed less than 50
{
	bill=unit*.5;
	bill+=(.2*bill);
}

void lessThan150(double unit,double& bill)       //Unit Consumed less than 150
{
	unit-=50;
	bill=25+(unit*.75);
	bill+=(.2*bill);
}

void lessThan250(double unit,double& bill)      //Unit Consumed less than 250
{
	unit-=150;
	bill=100+(unit*1.2);
	bill+=(.2*bill);
}

void moreThan250(double unit,double& bill)      //Unit Consumed more than 250
{
	unit-=250;
	bill=220+(unit*1.5);
	bill+=(.2*bill);
}

int main()
{
	double unit,bill=0.0;
	Ebill(unit);          //Inputting units consumed
	
	if(unit<=50)
		lessThan50(unit,bill);
		
	else if(unit<=150)
		lessThan150(unit,bill);
		
	else if(unit<=250)
		lessThan250(unit,bill);
		
	else
		moreThan250(unit,bill);
		
	cout <<"\n The total bill = Rs"<<bill;
	return 1;
}
