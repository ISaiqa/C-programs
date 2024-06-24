#include<iostream>
using namespace std;
int main()
{

	char n;
	char z;
	int x;
    for(int i=1;i<=4;i++)
	{
		cout<<" Enter "<<i<<" name and press 1 if the name is compelete."<<endl;
		for(int j=1;;j++)
		{
			cin>>n;
			cout<<endl;
			if((n=='b')||(n=='c')||(n=='d')||(n=='f')||(n=='g')||(n=='h')||(n=='j')||(n=='k')||(n=='l')||(n=='m')||(n=='p')||(n=='q')||(n=='r')||(n=='t')||(n=='v')||(n=='w')||(n=='x')||(n=='y'))
			{
				cout<<n;
				x=n;
				cout<<x;
			}
			else if(n=='s')
			{
				cout<<"$";
			}
			else if(n=='a')
			{
				cout<<"@";
			}
			else if(n=='e')
			{
				cout<<"<";
			}
			else if(n=='i')
			{
				cout<<"!";
			}
			else if(n=='o')
			{
				cout<<"()";
			}
			else if(n=='u')
			{
				cout<<"^";
			}
				else if(n=='z'||n=='1')
			{
				cout<<" "<<i<<" Name is complete.";
				break;
				
			}
		}
	//	continue;
		cout<<"\n Enter yy if you want to display another name and n if you want to end program:";
		cin>>z>>x;
		if((z=='y')||(z=='Y')||(x=='y')||(x=='Y'))
		    cout<<"\n OK";
		else if((z=='n')||(z=='N'))
		    i=5;
	}
}
