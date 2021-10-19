//Program to rotate an array in anticlockwise direction.
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the value of n: ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements in the array:"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Array before rotation is:"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	int t=a[0];
    for(i=0;i<n-1;i++)
    a[i]=a[i+1];
    a[n-1]=t;
    cout<<endl<<"Array after rotation is:"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
	return 0;
}
