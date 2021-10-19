//Program to swap two values by using call by reference
#include<iostream>
using namespace std;
void swap(int *p,int *q)
{    
	cout<<"Values before swapping in swap function are: x= "<<*p<<" y= "<<*q<<endl;
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	cout<<"Values after swapping in swap function are: x= "<<*p<<" y= "<<*q<<endl;
}
int main()
{
	int x,y;
	cout<<"Enter two values: ";
	cin>>x>>y;
	cout<<"Values before swapping in main function are: x= "<<x<<" y= "<<y<<endl;
	swap(&x,&y);
	cout<<"Values after swapping in main function are: x= "<<x<<" y= "<<y<<endl;
	return 0;
}
