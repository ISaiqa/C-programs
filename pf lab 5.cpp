#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float a,b,h,l,w,r,pi=3.14;
	int i=1,choice,n;
	int num;
	while(i!=0)
	{
		cout<<" Choose a shape\n 1. Rectangle\n 2. Triangle\n 3. Circle";
		cout<<"\n Enter your choice:";
		cin>>choice;
		if(choice==1)
		{
			for(int j=1;;j++)
			{
				cout<<" Enter length of rectangle:";
				cin>>l;
				cout<<" Enter width of rectangle:";
				cin>>w;
				a=l*w;
				cout<<"\n Area of rectangle:"<<a;
				cout<<"\n Enter any number to find area of rectangle again and 0 to stop:";
				cin>>num;
				if(num==0)
				   break;
				   
				
			}
		}
		else if(choice==2)
		{
			for(int j=1;;j++)
			{
				cout<<"\n Enter base of Triangle:";
				cin>>b;
				cout<<"\n Enter height of Triangle:";
				cin>>h;
				a=0.5*b*h;
				cout<<"\n Area of Triangle:"<<a;
				cout<<"\n Enter any number to find area of triangle again and 0 to stop:";
				cin>>num;
				if(num==0)
				   break;
				   
				
			}
		}
		else if(choice==3)
		{
			for(int j=1;;j++)
			{
				cout<<"\n Enter radius of Circle:";
				cin>>r;
				a=pi*r*r;
				cout<<"\n Area of Circle:"<<a;
				cout<<"\n Enter any number to find area of cicle again and 0 to stop:";
				cin>>num;
				if(num==0)
				   break;
				   
				
			}
		}	else
			{
				cout<<"\n Invalid Choice ";
			}
		
		cout<<"\n Enter 0 to end program and any other number to find area of more shapes:";
		cin>>i;
		if(i>0)
		{
			continue;
		}
		cout<<"\n Program ends here.";
		
		
	}
	getch();
	return 0;
}

