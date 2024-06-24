#include<iostream>
#include<conio.h>
using namespace std;
int largest(int a, int b, int c)
{
	if((a>b)&&(a>c))
	   return a;
	else if ((b>a)&&(b>c))
	  return b;
	else if ((c>a)&&(c>b))
	   return c;
}
int main()
{
	int x,y,z,large;
	cout<<"\n Enter first number:";
	cin>>x;
	cout<<"\n Enter second number:";
	cin>>y;
	cout<<"\n Enter third number:";
	cin>>z;
	large=largest(x,y,z);
	 cout<<" "<<large<<" is largest number.";	
	
}