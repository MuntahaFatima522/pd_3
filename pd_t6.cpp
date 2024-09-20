#include<iostream>
using namespace std;
main()
{
	float size,cost,area;
	int a,b;
	//a=cost per pound
	//b=cost per square foot
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	cin>>size;
	cout<<"Enter the cost of the bag: $";
	cin>>cost;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>area;
	a=cost/size;
	b=cost/area;
	cout<<"Cost of fertilizer per pound: $"<<a<<endl;
	cout<<"Cost of fertilizing per square foot: $"<<b;
}

