//WAP to copy data of one text file to another removing whitespaces using command line argument.
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void copyFile(ifstream& F1,ofstream& F2) //Function to copy data
{
    char ch;
    try
    {
        F1.open("Text.txt"); //Opening File 1
        if(!F1)
        {
            throw "Error 100:Opening Copy File";
        }
        F2.open("CopyText.txt"); //Opening File 2
        if(!F2)
        {
            throw "Error 100:Opening New Copied File";
        }
    }
    catch(const char* e)
    {
        cout<<e<<endl;
        exit(100);
    }
    while(F1.get(ch)) 
    {
        if(ch==' ') //Skipping if character is whitespace
            continue;
        else    
            F2.put(ch);
    }
    try
    {
        F1.close(); //Closing File 1
        if(F1.bad())
        {
            throw "Error 101:Closing Copy File";
        }
        F2.close(); //Closing File 2
        if(F2.bad())
        {
            throw "Error 101:Closing New Copied File";
        }
    }
    catch(const char* e)
    {
        cout<<e<<endl;
        exit(101);
    }
}

int main(int argc,char* argv[])
{
    if(argc!=3) //Checking if number of arguments is not enough or more
    {
        cout<<"Error 102:Not sufficient arguments"<<endl;
        exit(102);
    }
    ifstream input;
    ofstream output;
    copyFile(input,output);
    return 1;
}//main
