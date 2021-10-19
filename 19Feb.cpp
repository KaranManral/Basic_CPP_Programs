#include <iostream>
#include <cstring>

using namespace std;

int calcLength(char* ch)
{
    int i=0;
    while(*ch!='\0')
    {
        i++;
        ch++;
    }
    return i;
}

int main(int argc,char* argv[])
{
    if(argc!=2)
    {
        cout<<"Not Sufficient Arguments"<<endl;
        exit(0);
    }
    cout<<"Length of String: "<<calcLength(argv[1]);
    return 1;
}