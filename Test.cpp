//WAP to print stars. 

 

#include <iostream> 

 

using namespace std; 

 long strange(long,long);

int main() 

{ 

long a,b,c,d;
cin>>a>>b>>c>>d;
long r=strange(a,b);
long s=strange(r,c);
long t=strange(strange(s,d),strange(4,2));
long u=strange(t+3,s+2);
long v=strange(strange(strange(u,a),b),c);
cout<<r<<" "<<s<<" "<<t<<" "<<u<<" "<<v;

return 0; 

} 

long strange(long x,long y)
{
	long t=x+y;
	long z=x*y;
	return(t+z);
}

 
