// WAP to check if a year is leap year or not.
// 	Write a program to input week number and print week day.
//	Write a program to input month number and print number of days in that month.

#include<iostream>

using namespace std;

LeapYear(int& year)                    //Inputting Year
{
	cout <<"Enter the year in yyyy format"<<endl;
	cin >>year;
}

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

void calcWeekDay(int day)
{
	string s[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"}; 
    A:cout <<"Enter week number"<<endl;
	cin >>day;
	if(day>0&&day<8)
		cout <<"Week Day is : \t"<<s[day-1];
	else
	{
		cout<<"INVALID INPUT"<<endl;
		goto A;
	}	
}
	
void monthNumber(int month)
{
	int y;
	int leap[]={31,29,31,30,31,30,31,31,30,31,30,31};    //Month Days for Leap Year
	int nonleap[]={31,28,31,30,31,30,31,31,30,31,30,31};   //Month Days for non Leap Year
	
	A:cout <<"Enter the month number"<<endl;
	cin >>month;
	
	if(month>0&&month<=12)
	{
		cout <<"Enter the year to check for a leap year."<<endl;    
		cin >>y;
	
		if(checkLeapYear(y)==1)
			cout <<"\n Number of Days : "<<leap[month-1];
		else
			cout <<"\n Number of Days : "<<nonleap[month-1];
	}
	
	else
	{
		cout<<"INVALID INPUT"<<endl;
		goto A;
	}
}

int main()
{	
	int year,day,month;
	char choice;
	Repeat: cout<<"Enter the choice accordingly: \n a) To check if a Leap Year \n b) To calculate Weekday \n c) To calculate the number of days in given month"<<endl;
	cin >>choice;
	
	switch(choice)
	{
		case 'a':
			{
				LeapYear(year);
				
				if(checkLeapYear(year)==1)
					cout<<"The year is a Leap Year.";
					
				else
					cout<<"The year is not a Leap Year.";	
				break;	
			}
		case 'b':
			{
				calcWeekDay(day);
				break;
			}	
		case 'c':
			{
				monthNumber(month);
				break;
			}	
		default:
			{
				cout<<"\n Wrong Choice Enterred \n"<<endl;
				goto Repeat;
			}	
	}
	
	return 1;	
}
