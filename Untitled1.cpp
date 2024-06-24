#include<iostream>
using namespace std;
void name(int n1,int n2, int n3);
int main()
{
	int c1,c2,c3;
	char c;
	while(c!='e')
	{
	   cout<<"Enter the number 1= ";
	   cin>>c1;
	   cout<<"Enter the number 2= ";
	   cin>>c2;
	   cout<<"Enter the number 3= ";
	   cin>>c3;
	   name (c1,c2,c3);
	   cout<<" Pu want to end "
	   }
}
void name(int n1, int n2, int n3){
	if(n1>n2 & n1>n3){
		cout<<" largest number = "<<n1;
	}
	else if(n2>n1 & n2>n3)
	{
		cout<<"largest number = "<<n2;
	}
	else if(n3>n2 & n3>n2)
	{
		cout<<"largest number = "<<n3;
	}
	
}