//program to print inverted right triangle
#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=n;j>i;j--)
		cout<<"* ";
		cout<<endl;
	}
	return 0;
}
