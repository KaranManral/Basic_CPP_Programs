/*Create a class 'Time' with hours, minutes and seconds as private data members,
  two constructors (one default and one parameterized), 
  two public methods increment_min() and print().
  Also write a private function convertToSec() that converts and returns the stored time into seconds?.
  Show the use of such an object through the main() function.
*/

#include <iostream>
#include <iomanip>

using namespace std;

class Time
{
	private:int hr;
			int min;
			int sec;
			int convertToSec();
	public:void increment_min();
		   void print();		
		   Time();
		   Time(int h,int m,int s);
};

Time::Time()
		{
			hr=0;
			min=0;
			sec=0;
		}
Time::Time(int h,int m,int s)
		{
			hr=h;
			min=m;
			sec=s;
		}	
void Time::increment_min()
			{
				while(sec>=60)
				{
					min+=1;
					sec=sec-60;
				}
				while(min>=60)
				{
					hr+=1;
					min=min-60;
				}

			}		
void Time::print()
			{
				cout<<"Time in Hour:Minute:Second Format-\t"<<hr<<":"<<min<<":"<<sec<<endl; 
			}				
int Time::convertToSec()
			{
				int second=0;
				second=second+(hr*3600);
				second=second+(min*60);
				second=second+sec;
				return second;
			}
			
int main()
{
	Time ob;
	int hours,minutes,seconds;
	cout<<"Enter Hours,minutes and seconds respectively"<<endl;
	cin>>hours>>minutes>>seconds;
	Time ob1(hours,minutes,seconds);
	ob.print();
	ob1.increment_min();
	ob1.print();
}						
