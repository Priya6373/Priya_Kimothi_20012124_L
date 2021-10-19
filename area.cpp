//Program to display function overloading
#include<iostream> 
#include<cmath>
#define pi 3.14 
using namespace std;
int area(int a)
{
	return a*a;
}
float area(float r)
{
 	return pi*pow(r,2);	
}
float area(float l, float b)
{
	return l*b;
}
int main()
{
	int a;
	float r,l,b;
	cout<<"Enter the side of square: ";
	cin>>a;
	cout<<"Enter the radius of circle: ";
	cin>>r;
	cout<<"Enter the length and breadth of the rectangle: ";
	cin>>l>>b;
	cout<<"The area of square is: "<<area(a)<<endl;
	cout<<"The area of circle is: "<<area(r)<<endl;
	cout<<"The are of rectangle is: "<<area(l,b);
	return 0;
}
