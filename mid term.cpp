#include <iostream>
#include<conio.h>
using namespace std;

int main()
 {
 	
    int n=0;
    char choice;
    int sum = 0;
    for(int i=0;;i++)  
    {
    	cout<<"\n Enter a number:";
    	cin>>n;
    	sum=sum+n;
    	cout<<"\n Press n or N if you want to stop and press any other key if not:";
    	cin>>choice;
        if ((choice=='n')||(choice=='N'))
		 {
           break;
        }
    } 

    cout << "\n Sum of entered integers: " << sum<<endl;
    getch();
	return 0;
}

