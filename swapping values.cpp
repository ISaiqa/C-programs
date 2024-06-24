//2.	Write a C++ program that takes two variable from user and then swaps their value. Print the values before and after swapping. ( hint: use a temp variable) (explanantion, user entered a= 5, b=6, your program should swap it as a=6 and b=5)
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<" Enter first number:"<<endl;
	cin>>a;
	cout<<" Enter second number:"<<endl;
	cin>>b;
	cout<<" Number before swapping:"<<endl;
	cout<<" First number:"<<a<<endl;
	cout<<" Second number:"<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<" Number after swapping:"<<endl;
	cout<<" First number:"<<a<<endl;
	cout<<" Second number "<<b<<endl;
	getch();
	return 0;
}
	
	