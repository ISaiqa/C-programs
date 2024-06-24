#include<iostream>
#include<conio.h>
using namespace std;
void sum(){
	int a,b,sum;
	cout<<"enter two integers\n";
	cin>>a;
	cin>>b;
	sum=a+b;
	cout<<"the sum of two integer is "<<sum<<endl;
}
void subtract(){
	int a,b,subtract;
	cout<<"enter two integers\n";
	cin>>a;
	cin>>b;
	subtract=a-b;
	cout<<"a-b will be  "<<subtract<<endl;
}void multiply(){
	int a,b,multiply;
	cout<<"enter two integers\n";
	cin>>a;
	cin>>b;
	multiply=a*b;
	cout<<"the product of two integer is "<<multiply<<endl;
}void division(){
	float a,b,division;
	cout<<"enter two integers\n";
	cin>>a;
	cin>>b;
	division=a/b;
	cout<<"the division of two integer is "<<division<<endl;
}
int main (){
	again:
	char choice;
	cout<<"press + for addition\n";
	cout<<"press - for subtraction\n";	
    cout<<"press * for multiplication\n";
	cout<<"press / for division\n";
	cin>>choice;
	if(choice=='+'){
			sum();
	}
	else if(choice=='-'){
			subtract();
	}
	else if(choice=='*'){
			multiply();
	}
	else if(choice=='/')
	{
			division();
	}
	else{
	cout<<"invalid choice";
	goto again;
}
return 0;
}