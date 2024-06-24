#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int array1 [10];
	char choice;
	int sum;
	for(int i=0;i<=10;i++)
	{
		cout<<"enter the numbers you want to sum"<<endl;
		cin>>array1[i];
		sum=sum+array1[i];
		cout<<"press y if you want to add more numbers otherwise press any other character "<<endl;
		cin>>choice;
		if(choice=='y'||choice=='Y'){
			continue;
	}
	else 
	break;
}
cout<<"your final answer is "<<sum;
getch();
return 0;
}