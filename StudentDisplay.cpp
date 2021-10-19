//WAP to read the Text File created in last question in print Roll no. Name and Marks of students in order.
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

class Student
{
	private: string s[50];  //String Array to store each word read from file in separate destination.
	public: void getWord(ifstream& infile);
			void const print();
			Student(){   //Default Constructor
			}
};

void Student::getWord(ifstream& input)   //Function to read words from text files.
{
	input.open("Student.txt"); //Opening File
	if(!input)
	{
		cout<<"Error 100:Opening File"<<endl;
		exit(100);
	}
	char temp; //Char to read characters from file
	int i=0;   //int to fill array positions
	while(input.get(temp))
	{
		if(temp=='\t'||temp=='\n') //Separating words with tab and new line delimeters
			i++;
		else
			s[i]+=temp;
	}
	input.close(); //Closing File
	if(input.bad())
	{
		cout<<"Error 101 :Closing File"<<endl;
		exit(101);
	}
}

void const Student::print()  //Function to print data in given order
{
	int a=2,b=3,c=4;  //temporary variables to skip class and year of student data and changing line after marks of each student is printed.
	cout<<setw(29)<<"Roll No. \t  Name \t\tMarks"<<endl;
	for(int i=0;i<50;i++)
	{	
		if(i==a)
			a+=5;
		else if(i==b)
			b+=5;	
		else if(i==c)
		{
			cout<<s[i]<<endl;	
			c+=5;
		}
		else
			cout<<setw(8)<<s[i]<<"\t";
	}
}

int main()
{
	ifstream input;
	Student ob;
	ob.getWord(input);
	ob.print();
	return 1;
}//main
