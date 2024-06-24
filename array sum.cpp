#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char c;
	int a[10],sum;
	for( int i=0;i<10;i++)
	{
		cout<<" Enter the number you want to sum:";
		cin>>a[i];
		sum=sum+a[i];
		cout<<" Press y if you want to add more numbers or press any other key to stop:";
		cin>>c;
		if(c=='y'||c=='Y')
		  continue;
		else
		  break;  
	}
	cout<<" Final Sum :"<<sum;
	getch();
	return 0;
}