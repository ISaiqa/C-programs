#include<iostream>
#include<conio.h>
using namespace std;
void small( int a,int b)
{
	if(a<b)
	   cout<<" "<<a<<" is smaller.";
	else if (b<a)
	   cout<<" "<<b<<" is smaller.";
}
int main()
{
	int n1,n2;
	cout<<" Enter two numbers:"<<endl;
	cin>>n1>>n2;
	small(n1,n2);
	getch();
	return 0;
}