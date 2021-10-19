/*  Name:Karan Singh Manral
    RollNo. 5755
    Date 09/03/2021

    Ques-WAP to create a function appendSymbol() that appends a character at the end of every word in text file.
*/ 

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void appendSymbol(fstream& File1,char symbol)
{
    string word;
    File1.open("Test.txt",ios::in);  //Opening file as input file
    if(!File1)  //Checking if file opened successfully
    {
        cout<<"Error 100: Opening File"<<endl;
        exit(100);
    }
    while(File1 >> word) //Extracting words using cascading operator
    {
        word+=symbol;  //Appending the symbol at end of every Word
        cout<<word<<endl;  //Printing Appended Words
    }
    File1.close();  //Closing File
    if(File1.bad())  //Checking if file closed successfully
    {
        cout<<"Error 101: Closing File"<<endl;
        exit(101);
    }
}

int main()
{
    fstream File;
    char ch;
    cout<<"Enter the Symbol you want to append at end of every word"<<endl;
    cin>>ch; //Asking user to enter the symbol to be appended
    cout<<"Appended Words:"<<endl;
    appendSymbol(File,ch);  //Calling Function
    return 1;
}//main