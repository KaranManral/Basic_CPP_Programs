//WAP to store roll number,name,class,year,total marks of ten students in a file
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

class Student
{
	private:int rn,y,tmarks;
			string name,Class;
	public:void store(ofstream& ofile);
			void input();	
			Student(int r,string n,string c,int year,int tm) //Parameterised Constructor
			{
				rn=r;
				name=n;
				Class=c;
				y=year;
				tmarks=tm;
			}		
};

void Student::input() //Function to Take inputs from user
{
	cout<<"Enter Name of student"<<endl;
	cin>>name;
	cout<<"Enter Roll Number of student"<<endl;
	cin>>rn;
	cout<<"Enter the Class"<<endl;
	cin>>Class;
	cout<<"Enter the Year"<<endl;
	cin>>y;
	cout<<"Enter the total marks of student"<<endl;
	cin>>tmarks;
}

void Student::store(ofstream& ofile) //Function to store details of students in file
{
	do
	{
		ofile<<rn<<"\t"<<name<<"\t"<<Class<<"\t"<<y<<"\t"<<tmarks<<endl;
	}while(!ofile);
}

int main()
{
	int rollno,year,totmarks;
	string Name,Class;
	ofstream write;
	write.open("Student.txt");   //Opening file
	if(!write)
	{
		cout<<"Error 100: Opening File"<<endl;
		exit(100);
	}
	for(int i=0;i<10;i++) //Storing data of 10 students
	{
		cout<<"Enter details of Student"<<endl;
		Student ob1(rollno,Name,Class,year,totmarks);
		ob1.input();
		ob1.store(write);
	}
	write.close();   //Closing File
	if(write.bad())
	{
		cout<<"Error 101:Closing File"<<endl;
		exit(101);
	}	
	return 1;
}
