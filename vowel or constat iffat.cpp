//Write a C++ program to see if entered character is vowel or consonant (hint use bool datatype)
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char letter,c;
	bool isvowel;
	cout<<" Enter an alphabet:";
	cin>>c;
	letter=tolower(c);
	isvowel=((letter=='a')||(letter=='e')||(letter=='i')||(letter=='o')||(letter=='u'));
	if(isvowel)
	
		cout<<" It is vowel";	
	 
	else
	    cout<<" It is consonant";
	    
}