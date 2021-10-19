//    Write a program to input any character and check whether it is alphabet, digit or special character.  

#include<iostream> 

using namespace std; 

void input(char& ch) 
{ 
	cout <<"Enter a character \n"; 
     cin >>ch;                            //Taking character input 
} 

int checkAlpha(char c) 
{ 
    if((c>=65&&c<=90)||(c>=97&&c<=122))     //Checking for Alphabet 
		return 1;
} 

int checkDigit(char c) 
{         
    if(c>=48&&c<=57)                       //Checking for Digits 
        return 2; 
} 

int main() 
{ 
    char ch;
	int choice; 

	input(ch);  //Calling input function 

    choice=checkAlpha(ch);             //Calling checkAlpha 
                        
    choice=checkDigit(ch);       //Calling checkDigit 
        
    switch(choice)
	{
		case 1:
			{
				cout <<"\n Character is a Alphabet";
				break; 
			}
		case 2:
			{
				cout <<"\n Character is a Digit";   
				break;
			}
		default:
			{	
        		cout <<"\n Character is a Special Character"; 
			}	
	}
	    
    return 1; 
} 
