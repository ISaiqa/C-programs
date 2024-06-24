// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() 
{
    char n;
    
 for(int i=1;;i++)
 {
     cout<<" 1. '+' \n2. '-' \n3. '*' \n4. '/' \n5. stop";
     cout<<"\n Enter your choice :";
    cin>>n;
     if(n=='+')
     {
         cout<<"\n you selected addition \n";
     }
     else if(n=='-')
     {
         cout<<" \nyou selected subtraction \n";
     }
     else if(n=='*')
     {
         cout<<" \n you selected Multiplication \n";
     }
     else if(n=='/')
     {
         cout<<" \n you selected division \n";
     }
     else if(n=='5')
     {
         break;
     }
     else
     {
         cout<<"\n invalid input \n";
     }
     
     
 }
 
    return 0;
}
