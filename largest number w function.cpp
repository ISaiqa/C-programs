#include<iostream>
#include<conio.h>
using namespace std;
void largest(int a, int b, int c)
{
	if((a>b)&&(a>c))
	   cout<<" "<<a<<" is largest number.";
	else if ((b>a)&&(b>c))
	   cout<<" "<<b<<" is largest number.";
	else if ((c>a)&&(c>b))
	   cout<<" "<<c<<" is largest number.";	
}
int main()
{
	int x,y,z;
	cout<<"\n Enter first number:";
	cin>>x;
	cout<<"\n Enter second number:";
	cin>>y;
	cout<<"\n Enter third number:";
	cin>>z;
	largest(x,y,z);
	
}