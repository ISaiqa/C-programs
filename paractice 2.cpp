#include<iostream>
using namespace std;
int main()
{    
   do{
    char word,did;
	int num,num2,sum, multiply,addition,subtract,division;
	cout<<"Enter the 1st  number =  ";
	cin>>num;
	cout<<"Enter the 2nd number = ";
	cin>>num2;
	cout<<"1.Additon \n 2.Multiplication \n 3.Subtraction \n 4.Division \n ";
	cout<<"Enter your method that you want to perfom (1/2/3/4) = ";
	cin>>word;
	if( word == '1'){
		sum = num +num2;
		cout<<"The sum is given = "<<sum<<endl;
	}else if(word =='2'){
		multiply = num*num2;
		cout<<"The multiply of these numbers = "<<multiply<<endl;
	}else if(word =='3'){
		subtract=num-num2;
		cout<<"The subtractin  of these numbers = "<<subtract<<endl;
	}else if(word == '4'){
		division=num/num2;
		cout<<"The division result of the given numbers = "<<division<<endl;
	} 
	// cout<<"do you want to continue?";
	 // cin>>did;
	}
		while((did  == 'y' )|| (did == 'Y') );
		return 0;
}