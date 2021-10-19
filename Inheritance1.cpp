#include <iostream>
#include <iomanip>

using namespace std;

class Base
{
int b;
	public: Base()
			{
				b=0;
				cout<<"Base Class Constructor....."<<endl;
			}
			void show()
			{
				cout<<"Its base"<<endl;
			}
			void showVar()
			{
				cout<<"Base"<<++b;
			}	
};

class Der1:public Base
{
	int d1;
	public: Der1()
			{
				d1=0;
				cout<<"Derrived Class Constructor....."<<endl;
			}
			void show()
			{
				cout<<"Its Der1"<<endl;
			}
			void showVar()
			{
				cout<<"Der1:"<<++d1;
			}
};

int main()
{
	Der1 D1;
	D1.show();
	D1.showVar();
	return 1;
}
