#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int size,sum;
	char ch;
	cout<<" Enter size of Array:"<<endl;
	cin>>size;
	int a[size];
	cout<<"\n Enter numbers in array:";
	cin>>a[1];
	sum=a[1];
	for(int i=1;i<size;i++)
	{
		cout<<" \nPress y if you want to enter another number:";
		cin>>ch;
		if((ch=='y') || (ch=='Y'))
		{ 
		   cout<<" \nEnter another number:";
		   cin>>a[i];
		   sum=sum+a[i];
	    }
		else
		{ 
		    break;
		}
    }
    cout<<" \n Sum of all numbers:"<<sum;
	getch();
	return 0;
	
}