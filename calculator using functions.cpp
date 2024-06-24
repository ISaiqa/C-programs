#include<iostream>
#include<conio.h>
using namespace std;
void sum()
{
	int a,b,sum;
	cout<<"\n Enter two numbers to add:";
	cin>>a>>b;
	sum=a+b;
	cout<<"\n Sum of "<<a<<" and "<<b<<" is "<<sum;
}
void prod()
{
	int a,b,prod;
	cout<<"\n Enter two number to multiply:";
	cin>>a>>b;
	prod=a*b;
	cout<<"\n Product of "<<a<<" and "<<b<<" is "<<prod;
}
void divide()
{
	int a,b;
	float divide;
	cout<<"\n Enter two numbers to divide:";
	cin>>a>>b;
	divide=a/b;
	cout<<"\n Quotient of "<<a<<" and "<<b<<" is "<<divide;
}
void diff()
{
	int a,b,diff;
	cout<<"\n Enter two numbers to subtract:";
	cin>>a>>b;
	diff=a+b;
	cout<<"\n Difference of "<<a<<" and "<<b<<" is "<<diff;
}
int main()
{
	char c;
	repeat:
	cout<<"\n Select operation you want to perform:";
	cout<<"\n Enter + for addition";
	cout<<"\n Enter - for subtraction";
	cout<<"\n Enter * for multiplication";
	cout<<"\n Enter / for division\n";
	cin>>c;
	if(c=='+')
	   sum();
	else if(c=='-')
	   diff();
	else if(c=='*')
	   prod();
	else if(c=='/')
	   divide(); 
	 
	else
	  {
	     cout<<"\n Invalid choice:";
	     goto repeat; 
      }
	getch();
	return 0;
}