#include<iostream.h>
#include<conio.h>
using namespace std;
int main()
{
	int size;
	cout<<" Enter size of Array:"<<endl;
	cin>>size;
	int a[size],sum=0;
	cout<<" Enter numbers in array:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<" Enter a number:"<<endl;
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<" Sum of all numbers in array is :"<<sum;

	getch();
	return 0;
	
}