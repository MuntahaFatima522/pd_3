#include<iostream>
using namespace std;
main()
{
	int n,w,h,area,walls;
	cout<<"Number of square meters you can paint: ";
	cin>>n;
	cout<<"Width of the single wall: ";
	cin>>w;
	cout<<"Height of the single wall: ";
	cin>>h;
	area=h*w;
	walls=n/area;
	cout<<"Number of walls you can paint: "<<walls;
}
	