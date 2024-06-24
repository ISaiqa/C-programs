#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{    int size;
    cout<<"enter how many characters you want to store in the array\n";
    cin>>size;
	char array1[size];
	for(int i=0;i<=size-1;i++)
	{
	cout<<"enter character in the array\n";
	cin>>array1[i];
	}
	char choice;
	int count;
	count=0;
	cout<<"enter character you want to compare \n";
	cin>>choice;
	for(int i=0;i<=size-1;i++){
		if(choice==array1[i]){
			choice=array1[i];
			count++;
		}
	}
     cout<<" the character "<<choice<<" is repeated "<<count<<" times \n";
	return 0;
}