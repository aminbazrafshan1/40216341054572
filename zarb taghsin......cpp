#include <iostream>
#include <conio.h>
using namespace std;
int main()
   {
   int num1,num2,jam,menha,zarb;
      
   float taghsim;  
    
    cout<<"enter number   :";    
    cin>>num1;    
    cout<<"enter number   :";    
    cin>>num2;   
    
    
    jam=num1+num2;    
    menha=num1-num2;
    zarb=num1*num2;
    taghsim=(float)num1/num2;                         //12*      12.0   
    
	cout<<"jam  :"<<jam<<endl;
    cout<<"menha :"<<menha<<endl;
    cout<<"zarb  :"<<zarb<<endl;
    if(num2!=0)
    {
    
    cout<<"taghsim  :"<<taghsim<<endl;
	}
	else
	{
     cout<<"taghsim  : error..";
     
	}
 
       
   
   
   
   
   getch();
   return 0;  	
   	
   }