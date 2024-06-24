#include<iostream.h>
//#include<conio.h>
using namespace std;
int main()
{
	int size;
	cout<<" Enter size of Array:"<<endl;
	cin>>size;
	int a[size];
	cout<<" Enter numbers in array:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<" Enter a number:"<<endl;
		cin>>a[i];
	}
	for (int i=0,j=1;i<size; i++,j++)
	{
		cout<<" "<<a[i];
	}
	getch();
	return 0;
	
}