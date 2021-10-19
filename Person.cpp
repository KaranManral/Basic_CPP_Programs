//WAP to create class Person and inherit in classes Teacher and Student using run-time Polymorphism
#include <iostream>
#include <iomanip>

using namespace std;
#define Max 300

class Person
{
    protected: string details[Max];  //String Array to store Data
              int size;              //Size of Data
    public: void input();            //Function to Take input in object
            virtual void display();  //Display Function
            Person(){}               //Default Constructor
};

void Person::input()  //Function taking input of Details of a Person from User
{
    int a=1;
    for(int i=0;i<size*3;i=(i+3))
    {
        cout<<"Enter the details of Person "<<a++<<endl;
        cout<<"Enter Name,Age and Date of Birth in DD/MM/YYYY format of person respectively"<<endl;
        for(int j=i;j<(i+3);j++)
        {
            cin>>details[j];
        }
    }
}

void Person::display()  //Functio to Display Details of Person
{
    for(int i=0;i<size*3;i+=3)
    {   for(int j=i;j<(i+3);j++)
        {   
            if(details[i]!="-")
                cout<<setw(10)<<details[j]<<"\t";
        }
        cout<<endl;    
    }
}

class Student:public Person
{
    public:void display();  //Overridden Display Function for Student
            void deleteData(int pos);  //Function to delte Data from Array

            Student(int num) //Parameterised Constructor
            {
                size=num;
            }       
};

void Student::display()  //Overridden Display function of Student Class
{
    cout<<"Student Name \t \tAge \t   DOB "<<endl;
}

void Student::deleteData(int pos) //Deleting Data at position provided by user
{
    pos=pos*3;
    for(int i=pos;i<(pos+3);i++)
        details[i]="-";
}

class Teacher:public Person
{
    public:void display(); //Overridden Display function for Teacher Data
            void deleteData(int pos); //Function to Delete Data from array

            Teacher(int num) //Parameterised Constructor
            {
                size=num;
            }
};

void Teacher::deleteData(int pos) //Deleting Data at position provide by user
{
    pos=pos*3;
    for(int i=pos;i<(pos+3);i++)
        details[i]="-";
}

void Teacher::display() //Overridden Display function for Teacher Class
{
    cout<<"Teacher Name \t \tAge \t   DOB "<<endl;
}

int main()
{
    int n,i,pos;
    char ch='\0';
    while(ch!='X')
    {
        cout<<"Enter the size of Data i.e number of inputs to be taken"<<endl;
       cin>>n;
        Person *ptr;
        Person *ptr1;
        Student S(n);
        Teacher T(n);
        ptr=&S;
        ptr1=&T;
        cout<<"Enter 1 to input details of Students \n2 to input details of Teachers \n3 to exit program"<<endl;
        cin>>i;
        switch(i)
        {
            case 1:
            {
                ptr->Person::input();
                break;
            }
            case 2:
            {
                ptr1->Person::input();
                break;
            }
            case 3:
            {
                cout<<"\n Program Terminated By User"<<endl;
                exit(0);
            }
        }
        cout<<"\n If you want to delte any Students data enter 1 \nIf you want to delete any Teachers data enter 2 \nElse enter 3"<<endl;
        cin>>i;
        switch(i)
        {
            case 1:
            {
                cout<<"Enter position of Data to be deleted starting from 0"<<endl;
                cin>>pos;
                S.deleteData(pos);
                break;
            }
            case 2:
            {
                cout<<"Enter position of Data to be deleted starting from 0"<<endl;
                cin>>pos;
                T.deleteData(pos);
                break;
            }
        }
        cout<<"Enter 1 to display details of Students \n2 to display details of Teachers \n3 to exit program"<<endl;
        cin>>i;
        switch(i)
        {
            case 1:
            {
                ptr->display();
                ptr->Person::display();
                break;
            }
            case 2:
            {
                ptr1->display();
                ptr1->Person::display();
                break;
            }
            case 3:
            {
                cout<<"\n Program Terminated By User"<<endl;
                exit(0);
            }
        }
        cout<<"Enter X to exit program or R to run again"<<endl;
        cin>>ch;
    }
    return 1;
}//main