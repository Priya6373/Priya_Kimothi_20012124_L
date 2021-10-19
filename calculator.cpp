//Program to make a calculator using switch case. 
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int ch;
	float a,b,res=0.0;
	do
	{
		cout<<"Enter your choice 1. for addtion 2. for subraction 3. for division 4. for multiplication and 5. to exit: ";
		cin>>ch;
		switch(ch)
	{
		case 1:
		cout<<"Enter two numbers: ";
		cin>>a>>b;
		cout<<"The sum is: "<<a+b<<endl;
		break;
		case 2:
		cout<<"Enter two numbers: ";
		cin>>a>>b;
		cout<<"The subtraction is: "<<a-b<<endl;
		break;
		case 3:
		cout<<"Enter two numbers: ";
		cin>>a>>b;
		cout<<"The division is: "<<a/b<<endl;
		break;
		case 4:
		cout<<"Enter two numbers: ";
		cin>>a>>b;
		cout<<"The sum is: "<<a*b<<endl;
		break;
		default:
		exit(0);
	}
	}
	while(ch!=5);
	return 0;
}
