#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,r;
	cout<<" Enter a number for which you'd like to see the multiplication table:";
	cin>>n;
	cout<<" Enter the range of the table:";
	cin>>r;
	for(int i=1;i<=r;i++)
	{
		cout<<n<<" * "<<i<<" = "<<(n*i)<<endl;
	}
	getch();
	return 0;
	
}
