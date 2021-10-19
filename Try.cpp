#include <iostream>
#include <fstream>
#include <cstdlib>
#include <conio.h>

using namespace std;
int main()
{
	char ch;
	ifstream in_file;
	ofstream out_file;
	in_file.open("prog.txt");
	if(!in_file)
	{
		cout<<"Error 100 : Opening a File"<<endl;
		exit(100);
	}
	out_file.open("prog1.txt");
	if(!out_file)
	{
		cout<<"Error 100 : Opening a File"<<endl;
		exit(100);
	}
	while(in_file.get(ch))
	{
	//	cin>>ch;
		out_file.put(ch);
	}
	out_file.close();	
	if(out_file.bad())
	{
		cout<<"Error 102:Closing File"<<endl;
		exit(102);
	}
	in_file.close();
	if(in_file.bad())
	{
		cout<<"Error 102:Closing File"<<endl;
		exit(102);
	}
	return 1;
}
