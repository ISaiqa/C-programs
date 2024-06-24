#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char c;
	int size;
	cout<<" \n How many characters you want to store in the array:";
	cin>>size;
	char a[size];
	int count=0;
	char repeat ;
	for( int i=0;i<size;i++)
	{
		cout<<"\n Enter characters in the array:";
		cin>>a[i];
	}
	cout<<"\n Enter character you want to compare:";
	cin>>repeat;
	for(int i=0;i<size;i++)
	{
		
	
		if (repeat==a[i])
		
			count++;
    }
    cout<<" "<<repeat<<" is repeated "<<count<<" times.";
    getch();
	return 0;
}