#include <iostream>
using namespace std;

int main() 
{
    int l ,n , i, sum=0;
    cout<<"\n How many number of integers you want to add in a sum : ";
    cin>>l;
    for(i=1;i<=l;i++)
    {
        cout<<"\n Enter your"<<i<<"No : ";
        cin>>n;
        sum=sum+n;
    }
    cout<<"\n Your sum is "<<sum;
 
    return 0;
}
