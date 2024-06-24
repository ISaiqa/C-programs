#include<iostream>
using namespace std;
void name(int n1,int n2, int n3);
int main()
{
	int c1,c2,c3;
	cout<<"Enter the number 1= ";
	cin>>c1;
	cout<<"Enter the number 2= ";
	cin>>c2;
	cout<<"Enter the number 3= ";
	cin>>c3;
	name (c1,c2,c3);
}
void name(int n1, int n2, int n3){
      int arr[3]={n1,n2,n3};
      int max=1;
      for(int i=1;i<=3;){
      	if(arr[i]>max)
      	max= arr[i];
      	i++;
	  }
	  cout<<"maximum number "<<max;  
	}