#include<iostream>
using namespace std;
int main ()
{
    int a;
    char b;
    float c;
   cout<<" Enter an integer :";
   cin>>a;
   b=a;
   cout<<" character equivalent:"<<b<<endl;
   c=a;
   cout<<" float equivalent: "<<c<<endl;
   cout<<" Enter a character:";
   cin>>b;
   a=b;
   cout<<" integer equivalent:"<<a<<endl;
   c=b;
   cout<<" float equivalent : "<<c<<endl;
   cout<<" Enter a decimal:";
   cin>>c;
   b=c;
   cout<<" character equivalent : "<<b<<endl;
   a=c;
   cout<<" integer equivalent :"<<a<<endl;
   return 0;
   
}