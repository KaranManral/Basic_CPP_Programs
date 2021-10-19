/*WAP for Conversions – distance, temperature: 

a)Radians to degrees 

b)Fahrenheit to Celsius and vice versa. 

c)Inches measures into foot, centimeter, yard and meter.*/


 #include <iostream>

using namespace std;

double radToDeg(double r)  //For Radian to Degree.
{
	return (r/3.14)*180.0;
}

double fahToCel(double f)  //For Fahrenheit to Celcius.
{
	return ((f-32.0)*5)/9;
}

double celToFah(double c)   //For Celsius to Fahrenheit.
{
	return (9*c)/5+32;
}

double inchToFoot(double i)   //For inches to Foot.
{
	return i/12.0;
}

double inchToCenti(double i)   //For inches to Centimeter.
{
	return i*2.54;
}

double inchToYard(double i)    //For inches to Yard
{
	return i/36.0;
}

double inchToMeter(double i)  //For inches to Meter
{
	return i/39.37;
}

int main()
{
	int ch;  //For user choice
	Repeat:cout <<"\n Enter the choice: \n 1 for radian to degree \n 2 for fahrenheit to celsius \n 3 for celsius to fahrenheit \n 4 for inch to foot \n 5 for inch to centimeter \n 6 for inch to yard \n 7 for inch to meter"<<endl;
	
	cin >>ch;
	double r,f,c,i;   //r=radian f=fahrenheit c=celsius i=inches
	
	switch (ch)    //Doing conversion according to user choice.
	{
		case 1:
			{
				cout <<"Enter the value in radian \n";
				cin>>r;
				cout <<"The value of "<<r<<" radian in degree= "<<radToDeg(r);
				break;
			}
		case 2:
			{
				cout <<"\n Enter the temperature in Fahrenheit \n";
				cin>>f;
				cout <<"The value of "<<f<<" Fahrenheit in Celsius= "<<fahToCel(f);
				break;
			}	
		case 3:
			{
				cout <<"\n Enter the temperature in Celsius \n";
				cin>>c;
				cout <<"The value of "<<c<<" Celsius in Fahrenheit= "<<celToFah(c);
				break;
			}
		case 4:
			{
				cout <<"\n Enter the value in inches \n";
				cin>>i;	
				cout <<"\n The value of "<<i<<" Inches in Foot= "<<inchToFoot(i);
				break;
			}	
		case 5:
			{
				cout <<"\n Enter the value in inches \n";
				cin>>i;
				cout <<"\n The value of "<<i<<" Inches in Centimeter= "<<inchToCenti(i);
				break;	
			}
		case 6:
			{
				cout <<"\n Enter the value in inches \n";
				cin>>i;
				cout <<"\n The value of "<<i<<" Inches in Yard= "<<inchToYard(i);
				break;
			}
		case 7:
			{
				cout <<"\n Enter the value in inches \n";
				cin>>i;
				cout <<"\n The value of "<<i<<" Inches in Meter= "<<inchToMeter(i);
				break;
			}
		default:
			{
				cout <<"\n Wrong Choice Entered,Please Enter a correct choice"<<endl;
				goto Repeat;
			}	
	}
	return 1;
}
