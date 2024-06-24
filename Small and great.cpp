#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char c;
	int size;
	cout<<" \n How many integers you want to store in the array:";
	cin>>size;
	int a[size];
	int min,max;
	for( int i=0;i<size;i++)
	{
		cout<<"\n Enter numbers in the array:";
		cin>>a[i];
	}
	max=a[0];
	min=a[0];
	for(int i=1;i<size;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
		if (min>a[i])
		{
			min=a[i];
		}
	}
	cout<<" Greatest number in the array is:"<<max;
	cout<<"\n Smallest number in the array is:"<<min;

	getch();
	return 0;
}