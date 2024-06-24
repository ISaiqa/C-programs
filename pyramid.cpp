#include<iostream>
using namespace std;
int main()
{
	int rows, space;
	cout<<"Enter the number of rows ";
	cin>>rows;
	for(int i=rows, k=0; i>=1; --i,k=0)
	{
		for(space=0; space<rows-i; ++space)
		{
			cout<<" ";
		}
		while(k!=2*i-1)
		{
			cout<<"*";
			++k;
		}
		cout<<endl;
	}
//	return 0;
}