#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[45],find;
	for(int i=0,j=3340;i<45;i++,j++)
	{
		a[i]=j;
	}
	cout<<" Enter Roll number you want to find:";
	cin>>find;
	for (int i=0;i<45;i++)
	{
		if( a[i]==find)
		{
		
		    cout<<" Index of Roll number "<<a[i]<<" is "<<i;
		    break;
	    }
	   else
	     continue;
	}
	getch();
	return 0;
	
}