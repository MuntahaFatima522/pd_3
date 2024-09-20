#include<iostream>
using namespace std;
main()
{
	string name;
	float w,d;
	cout<<"Enter the name of the person: ";
	cin>>name;
	cout<<"Enter the target weight loss in kilograms: ";
	cin>>w;
	//1kg after 15 days
	d=15*w;
	cout<<name<<" will need "<<d<<" days to lose "<<w<<" kg weight by following the doctor's suggestions";
}