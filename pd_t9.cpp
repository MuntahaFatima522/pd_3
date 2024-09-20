#include<iostream>
using namespace std;
main()
{
	int number,a,r1,b,r2,c,r3,d,r4,sum;
	//r represents remainder
	cout<<"Enter 4-digit number: ";
	cin>>number;
	a=number/1000;
	r1=number%1000;
	b=r1/100;
	r2=r1%100;
	c=r2/10;
	r3=r2%10;
	d=r3/1;
	r4=r3%1;
	sum=a+b+c+d;
	cout<<"Sum of the individual digits: "<<sum;
}