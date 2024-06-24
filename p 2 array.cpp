#include<iostream>
using namespace std;
void name(int c);
int main()
{
    int x;
    cout<<"How many natural numbers you want to get added? = ";
    cin>>x;
    
    name(x);
}
void name(int c)
{

    int sum=0;

        for (int i=0;i<c;i++)
		{
            sum+=i;
            
        }
    
         cout<<"sum = "<<sum;
}