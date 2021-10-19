//Program to reverse the array elements entered by user
#include<iostream>
using namespace std;
void reverse(int *p, int start, int end)
{
	while(start<end)
	{
	   int temp=*(p+start);
		*(p+start)=*(p+end);
		*(p+end)=temp;
		end--;
		start++;
	}
}
int main()
{
	int n,i,b,temp;
	b=n-1;
	cout<<"Enter the value of n: ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements in the array: ";
	for(i=0;i<n;i++)
	cin>>a[i];
		cout<<endl<<"The array before reversing the elements is: ";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	reverse(a,0,n-1);
	cout<<endl<<"The array after reversing the elements is: ";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
