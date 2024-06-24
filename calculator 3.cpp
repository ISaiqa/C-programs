// Online C++ compiler to run C++ program online
#include <iostream>


using namespace std;

int main()
 {
    int num1,num2;
    char choice,ch;
 while(true)
 {
     cout<<"\nEnter your 1st No :";
     cin>>num1;
     cout<<"\nEnter your 1st No :";
     cin>>num2;
     cout<<" 1. '+' \n2. '-' \n3. '*' \n4. '/' ";
     cout<<"\n Enter your choice :";
    cin>>choice;
     if(choice=='+')
     {
         cout<<"\n Your sum is :"<<num1+num2;
         
     }
     else if(choice=='-')
     {
         cout<<" \nyour subtraction is :"<<num1-num2;
     }
     else if(choice=='*')
     {
         cout<<" \n your Multiplication is :"<<num1*num2;
     }
     else if(choice=='/')
     {
         cout<<" \n your division is :"<<num1/num2;
     }
     else
     {
         cout<<"\n invalid input \n";
     }
     cout<<"\npress 'N' or 'n' if you want to finish the program Or press any other key to continue";
     cin>>ch;
     if(tolower(ch)=='n')
	 {
         break;
     }
 }
}