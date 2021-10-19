/* WAP that determines a student’s grade. Input three test scores from user between 0 and 100. Calculate and display a student’s grade based on the following rules: 

if average score is 90% or more, the grade is ‘A’. 

if average score is 70% or more, and less than 90% it checks the third score, if the third score is 90% or more, the grade is ‘A’ otherwise the grade is ‘B’. 

if average score is 50% or more, and less than 70% it checks the average of second and third score, if the average of two is greater than 70%, the grade is ‘C’ otherwise the grade is ‘D’. 

if average score is less than 50%, then the grade is ‘F’. */

#include<iostream>

using namespace std;

Grade(int& marks1,int& marks2,int& marks3,double& avg)
{
	cout <<"Enter the marks of a student in three subjects respectively"<<endl;
	cin >>marks1;
	cin >>marks2;
	cin >>marks3;
	avg=(marks1+marks2+marks3)/3.0;     //Calculating Average Marks
}

void grade1()    //When Average Marks above or equal 90
{
	cout <<"\n The student achieved A grade.";
}

void grade2(int marks3)
{
	if(marks3>=90)
		cout <<"\n The student achieved A grade.";
	else
		cout <<"\n The student achieved B grade.";
}

void grade3(int marks2,int marks3)
{
	double temp=(marks2+marks3)/2.0;     //Calculating avergae marks of Subject 2 and Subject 3
	if(temp>70)
		cout <<"\n The student achieved C grade.";
	else
		cout <<"\n The student achieved D grade.";
}

void grade4()     //When Average Marks below 50
{
	cout <<"\n The student achieved F grade.";
}

int main()
{
	int marks1,marks2,marks3;
	double avg;

	Grade(marks1,marks2,marks3,avg);

	if(avg>=90)
		grade1();
	else if(avg<90&&avg>=70)
		grade2(marks3);
	else if(avg<70&&avg>=50)
		grade3(marks2,marks3);
	else
		grade4();
	return 1;
}
