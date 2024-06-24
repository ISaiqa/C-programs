#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	float avg;
	cout<<" Enter three numbers:";
	cin>>a>>b>>c;
	int sum = a+b+c;
	avg=sum/3;
	cout<<" Average of numbers="<<avg;
	return 0;
}