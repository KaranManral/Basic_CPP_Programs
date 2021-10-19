#include <iostream>
#include <iomanip>

using namespace std;

int checkLeapYear(int y)                       //Checking for Leap Year
{
	if(y%400==0)                            //Checking Century Leap Year
		return 1;
		
	else if(y%100==0)
		return 0;
	
	else if(y%4==0)
		return 1;
	
	else
		return 0;	
}

void printHeader(int m,int y)             //Function to print the header of calender that is month and the year
{
	switch(m)
	{
		case 1:
			{
				cout<<"\n \t \t JANUARY \t"<<y<<endl;
				break;
			}
		case 2:
			{
				cout<<"\n \t \t FEBRUARY \t"<<y<<endl;
				break;
			}
		case 3:
			{
				cout<<"\n \t \t MARCH \t"<<y<<endl;
				break;
			}
		case 4:
			{
				cout<<"\n \t \t APRIL \t"<<y<<endl;
				break;
			}
		case 5:
			{
				cout<<"\n \t \t MAY \t"<<y<<endl;
				break;
			}
		case 6:
			{
				cout<<"\n \t \t JUNE \t"<<y<<endl;
				break;
			}
		case 7:
			{
				cout<<"\n \t \t JULY \t"<<y<<endl;
				break;
			}		
		case 8:
			{
				cout<<"\n \t \t AUGUST \t"<<y<<endl;
				break;
			}
		case 9:
			{
				cout<<"\n \t \t SEPTEMBER \t"<<y<<endl;
				break;
			}
		case 10:
			{
				cout<<"\n \t \t OCTOBER \t"<<y<<endl;
				break;
			}		
		case 11:
			{
				cout<<"\n \t \t NOVEMBER \t"<<y<<endl;
				break;
			}
		case 12:
			{
				cout<<"\n \t \t DECEMBER \t"<<y<<endl;
				break;
			}							
	}
}

int dayNumber(int m,int y)          //Function to count first date of month is which day of week 
{ 
	int F,D,C,T;
	
	if(m<=2)
		D=(y-1)%100;
	else
		D=y%100;	
	C=(y/100);
	switch(m)                          //Converting month into georgian calender form that is march first month and february last month
	{
		case 1:
		{
			m=11;
			break;
		}
		case 2:
		{
			m=12;
			break;
		}
		case 3:
		{
			m=1;
			break;
		}
		case 4:
		{
			m=2;
			break;
		}
		case 5:
		{
			m=3;
			break;
		}
		case 6:
		{
			m=4;
			break;
		}
		case 7:
		{
			m=5;
			break;
		}
		case 8:
		{
			m=6;
			break;
		}
		case 9:
		{
			m=7;
			break;
		}
		case 10:
		{
			m=8;
			break;
		}	
		case 11:
		{
			m=9;
			break;
		}	
		case 12:
		{
			m=10;
			break;
		}	
	}
	F=1+((13*m-1)/5)+D+(D/4)+(C/4)-2*C;                      //Using Zeller rule to calculate day
	if(F<7)
		F=F+7;	
	T=F%7;
	if(T<0)
		T=-T;
	return T;
}

void printDays(int m,int y)                           //Function to print calender
{
	int k=1;
	int T=dayNumber(m,y);
	cout<<"\n \n Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat"<<endl;
	switch(m)
	{
		case 1:
			{
				for(int i=0;i<T;i++,k++)
					cout<<"\t";
				for(int i=1;i<=31;i++,k++)
				{
					cout<<" "<<i<<"\t";
					if(k!=1&&k%7==0)
						cout<<"\n";
				}
				break;	
			}
		case 2:
			{
				if(checkLeapYear(y))                 //Checking for leap year
				{
					for(int i=0;i<T;i++,k++)
						cout<<"\t";
					for(int i=1;i<=29;i++,k++)
					{
						cout<<" "<<i<<"\t";
						if(k!=1&&k%7==0)
							cout<<"\n";
					}
				}
				else
				{
					for(int i=0;i<T;i++,k++)
						cout<<"\t";
					for(int i=1;i<=28;i++,k++)
					{
						cout<<" "<<i<<"\t";
						if(k!=1&&k%7==0)
							cout<<"\n";
					}
				}
				break;
			}
		case 3:
			{
				for(int i=0;i<T;i++,k++)
					cout<<"\t";
				for(int i=1;i<=31;i++,k++)
				{
					cout<<" "<<i<<"\t";
					if(k!=1&&k%7==0)
						cout<<"\n";
				}
				break;
			}
		case 4:
			{
				for(int i=0;i<T;i++,k++)
					cout<<"\t";
				for(int i=1;i<=30;i++,k++)
				{
					cout<<" "<<i<<"\t";
					if(k!=1&&k%7==0)
						cout<<"\n";
				}
				break;
			}
		case 5:
			{
				for(int i=0;i<T;i++,k++)
					cout<<"\t";
				for(int i=1;i<=31;i++,k++)
				{
					cout<<" "<<i<<"\t";
					if(k!=1&&k%7==0)
						cout<<"\n";
				}
				break;
			}
		case 6:
			{
				for(int i=0;i<T;i++,k++)
					cout<<"\t";
				for(int i=1;i<=30;i++,k++)
				{
					cout<<" "<<i<<"\t";
					if(k!=1&&k%7==0)
						cout<<"\n";
				}
				break;
			}
		case 7:
			{
				for(int i=0;i<T;i++,k++)
					cout<<"\t";
				for(int i=1;i<=31;i++,k++)
				{
					cout<<" "<<i<<"\t";
					if(k!=1&&k%7==0)
						cout<<"\n";
				}
				break;
			}
		case 8:
			{
				for(int i=0;i<T;i++,k++)
					cout<<"\t";
				for(int i=1;i<=31;i++,k++)
				{
					cout<<" "<<i<<"\t";
					if(k!=1&&k%7==0)
						cout<<"\n";
				}
				break;
			}
		case 9:
			{
				for(int i=0;i<T;i++,k++)
					cout<<"\t";
				for(int i=1;i<=30;i++,k++)
				{
					cout<<" "<<i<<"\t";
					if(k!=1&&k%7==0)
						cout<<"\n";
				}
				break;
			}
		case 10:
			{
				for(int i=0;i<T;i++,k++)
					cout<<"\t";
				for(int i=1;i<=31;i++,k++)
				{
					cout<<" "<<i<<"\t";
					if(k!=1&&k%7==0)
						cout<<"\n";
				}
				break;
			}
		case 11:
			{
				for(int i=0;i<T;i++,k++)
					cout<<"\t";
				for(int i=1;i<=30;i++,k++)
				{
					cout<<" "<<i<<"\t";
					if(k!=1&&k%7==0)
						cout<<"\n";
				}
				break;
			}
		case 12:
			{
				for(int i=0;i<T;i++,k++)
					cout<<"\t";
				for(int i=1;i<=31;i++,k++)
				{
					cout<<" "<<i<<"\t";
					if(k!=1&&k%7==0)
						cout<<"\n";
				}
				break;
			}	
	}
	
}
int main()
{
	int month,year;
	cout<<"Enter the month"<<endl;
	cin>>month;
	cout<<"Enter the year"<<endl;
	cin>>year;
	printHeader(month,year);             //Calling printHeader
	printDays(month,year);              //Calling printDays
}
