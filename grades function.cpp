#include<iostream>
#include<conio.h>
using namespace std;
void grade (int m)
{
	if (m<=100 && m>=80)
	    cout<<" Congrats! You got grade A.";
	else if(m<=80 && m>=60)
	    cout<<" Congrats! You got grade B.";
	else if(m<=60 && m>=40)
	    cout<<" You are passed, You got grade C.";
	else if(m<=40 && m>=0)
	    cout<<" You are failed you got grade F.";
	else 
	    cout<<" Invalid ";
	    
}
int main()
{
	int marks;
	cout<<"\n Enter marks of student(0-100)";
	cin>>marks;
	grade(marks);
	getch();
	return 0;
}