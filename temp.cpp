//Program to converted entered temperature from farnheit to celsius
#include<iostream>
using namespace std;
int main()
{
	float temp,t;
	cout<<"Enter the temperature in faranheit: ";
	cin>>temp;
	t=(temp-32)*5/9;
	cout<<"The temperature in degree celsius is: "<<t<<endl;
	return 0;
}
