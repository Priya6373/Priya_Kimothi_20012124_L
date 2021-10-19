//Program to find the factorial of any given number. 
#include<iostream>
using namespace std;
long long int fact(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return n*fact(n-1); 
}
int main()
{
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<"The factorial of "<<n<<" is: "<<fact(n)<<endl;
	return 0;
}
