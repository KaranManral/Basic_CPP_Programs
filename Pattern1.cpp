//WAP to draw Pattern of first 3 letters of your name.

#include <iostream>

using namespace std;

void draw() //Printing the Pattern
{
	cout<<"\t"<<"K   K"<<"\t";	cout<<"AAA  "<<"\t";	cout<<"RRRR "<<endl;
	cout<<"\t"<<"K  K "<<"\t";  cout<<"A  A "<<"\t";	cout<<"R  R "<<endl;
	cout<<"\t"<<"KKK  "<<"\t";	cout<<"A  A "<<"\t";	cout<<"R  R "<<endl;
	cout<<"\t"<<"KKK  "<<"\t";	cout<<"AAAA "<<"\t";	cout<<"RRR  "<<endl;
	cout<<"\t"<<"KKK  "<<"\t";	cout<<"A  A "<<"\t";	cout<<"R R  "<<endl;
	cout<<"\t"<<"K  K "<<"\t";	cout<<"A  A "<<"\t";	cout<<"R  R "<<endl;
	cout<<"\t"<<"K   K"<<"\t";	cout<<"A  A "<<"\t";	cout<<"R   R"<<endl;
}

int main()
{
	draw();
	return 1;
}
