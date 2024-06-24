#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{    int size;
    cout<<"enter how many numbers you want to store in the array\n";
    cin>>size;
	int array1[size];
	
	for(int i=0;i<=size-1;i++)
	{
	cout<<"enter number in the array\n";
	cin>>array1[i];
	}
	int max=array1[0];
	for(int i=0;i<=size-1;i++){
		if(max<array1[i]){
			max=array1[i];
		}
	}
	int min=array1[0];
	for(int i=0;i<=size-1;i++){
		if(min>array1[i]){
			min=array1[i];
		}
	}
		 cout<<"greatest number stored in array 1 is "<<max;
		 cout<<"smallest number stored in array 1 is "<<min;
	return 0;
}