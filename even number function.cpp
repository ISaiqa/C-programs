#include<iostream>
#include<conio.h>
using namespace std;
void even(int a)
{
	if((a%2)==0)
	{
		cout<<" It is even number."<<endl;
	}
	else if((a%2)==1)
	{
		cout<<" It is odd number."<<endl;
	}
	else
	{
		cout<<" Invalid"<<endl;
	}
} 
int main()
{
	int x;
	cout<<" Enter a number:";
	cin>>x;
	even(x);
	getch();
	return 0;
}