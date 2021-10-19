//WAP to create a class List of two sets and perform basic operation

#include <iostream>
#include <iomanip>
#define max 100
using namespace std;

class List
{
	private: int a[max],size;
	public : List() //Default Constructor
				{
					size=0;
				}
			List(int s)//Paramerterised Constructor
			{
				size=s;
			}	
			
            List(const List& A) //Copy Constructor
            {
                size=A.size;
                for(int i=0;i<size;i++)
                {
                    a[i]=A.a[i];
                }
            }

			List operator+(const List& A);
            List operator*(const List& A);
            List operator-(const List& A);
			void inputArray();
            void sortArray();
			void const print();
};

void List::inputArray() //Function to take input in array
{
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<size;i++)
		cin>>a[i];
}

void const List::print() //Function to print array
{
    if(size==0)
        cout<<"{Empty}"<<endl;
    else    
    {
        cout<<"{";
	    for(int i=0;i<size;i++)
	    	cout<<a[i]<<",";
	    cout<<"\b }"<<endl;	
    }
}

void List::sortArray() //Function to sort array in ascending order
{
    if(size>1)
    {
        int min,temp;
        for(int i=0;i<size-1;i++)
        {
         min=i;
        for(int j=i+1;j<size;j++)
            if(a[j]<a[min])
                min=j;
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
        }
    }
    else 
        return;
}

List List::operator+(const List& A) //Function to union two sets 
{
    if(size==0&&A.size==0)
        return (*this);
    else
    {    
	    List B(size+A.size+1);

		for(int i=0;i<A.size;i++) //Inserting Set 1 in Union Set
			B.a[i]=A.a[i];
		int d=A.size,k;
		for(int i=0;i<size;i++)
		{
			k=0;
			for(int j=0;j<A.size;j++)
			{
				if(A.a[j]==a[i])
				k++;
			}
			if(k==0)
				B.a[d++]=a[i]; //Inserting Elements of Set 2 if not repeated
			B.size=d;	
		}
	    return B;
    }
}

List List::operator*(const List& A) //Function for intersection
{
    if(size==0&&A.size==0)
        return (*this);
    else
    {    
        List ob(size);
        int t=0,d,b=0;
	    for(int i=0;i<size;i++)
        {
            d=0;
            for(int j=0;j<A.size;j++)
            {
                if(a[i]==A.a[j])
                    d++;
            }    
            if(d!=0)
            {   
                for(int k=0;k<ob.size;k++)
                {
                    if(a[i]==ob.a[k])
                        b++;
                }
                if(b==0)    
                    ob.a[t++]=a[i]; //Putting elements in Intersection set
            }
            ob.size=t;    
        }
        List B(ob.size);
        t=0;
        for(int i=0;i<ob.size;i++)
        {
            d=0;
            for(int j=i+1;j<ob.size;j++)
            {
                if(ob.a[i]==ob.a[j])
                    d++;
            }
            if(d==0)
                B.a[t++]=ob.a[i]; //Removing Repeated elements
            B.size=t;    
        }
	    return B;
    }
}

List List::operator-(const List& A) //Function for Subtracting Sets 
{
    if(size==0&&A.size==0)
        return (*this);
    else
    {
        List B(size);
        int t=0,d;
        for(int i=0;i<size;i++) 
        {
            d=0;
            for(int j=0;j<A.size;j++)
            {
                if(a[i]==A.a[j])
                    d++;
            }
            if(d==0)
                B.a[t++]=a[i];
            B.size=t;    
        }
        return B;
    }
}

int main()
{
	int s,s1,i,j=0;
    while(j!=1)
	{
        List B,ob2,ob1,A,U,I,ob3,AB,CA,CB,BA;
        cout<<"Enter the size of Set 1"<<endl;
	    cin>>s;
        if(s!=0)
        {
	        A=List(s);
	        A.inputArray();
            ob1=List(A);  //Storing A in ob1 using copy constructor
        }
        cout<<"Do you want to input second array? Enter 1 for yes or 0 for No"<<endl;
        cin>>i;
        if(i==1)
        {
    	    cout<<"Enter the size of Set 2"<<endl;
	        cin>>s1;
            if(s1!=0)
	        {
                B=List(s1);
	            B.inputArray();
                ob2=List(B);  //Storing B in ob2 using copy constructor
            }
        }
        if(s==0)
            U=ob2+ob1;
        else    
	        U=ob1+ob2;	 //Taking Union
        ob3=List(U);    //Storing Union in ob3 using copy constructor
        CA=ob3-ob1; //Complementing A
        CB=ob3-ob2;  //Complementing B
        AB=ob1-ob2; //A-B
        BA=ob2-ob1; //B-A
        I=ob1*ob2;  //Taking Intersection
        cout<<"\n\nPrinting Details\n\n"<<endl;
	    cout<<"Set 1"<<endl;
        A.sortArray();
	    A.print();	
	    cout<<"Set 2"<<endl;
	    B.print();
	    cout<<"Union"<<endl;
        U.sortArray();
	    U.print();
        cout<<"Intersection"<<endl;
        I.sortArray();
	    I.print();
        cout<<"Complement A"<<endl;
        CA.sortArray();
        CA.print();		
        cout<<"Complement B"<<endl;
        CB.sortArray();
        CB.print();	
        cout<<"A-B"<<endl;
        AB.sortArray();
        AB.print();
        cout<<"B-A"<<endl;
        BA.sortArray();
        BA.print();	
        cout<<"\n \n ENTER 1 TO EXIT PROGRAM OR 0 TO RUN AGAIN"<<endl;
        cin>>j;
    }	
	return 1;
}
