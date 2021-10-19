/*Program to create a function power() to raise a number m to a power n. the function take double
value for m and integer value for n and return the result correctly. Use a default value of 2 for
n to make the function to calculate squares when this argument is omitted. Write a main function that
gets the values ofm and n from the user to test the function.*/
#include<iostream>
using namespace std;
double raise_pow(float m, int n)
{
	double res=1;
	if(n==2)
	return m*m;
	else
	{
	while(n>0)
	{
	res*=m;
	n--;
	}
	return res;
	}
}
int main()
{
	int n;
	float m;
    cout<<"Enter the number and the power it has to be raised: ";
	cin>>m>>n;
	double res=raise_pow(m,n);
	cout<<m<<" raise to power "<<n<<" is: "<<res;
	return 0;
}
