#include<iostream>
using namespace std;
main()
{
	int n,f,t;
	cout<<"Number of Minutes: ";
	cin>>n;
	cout<<"Frames per Second: ";
	cin>>f;
	//we multiply n with 60 to convert it into seconds
	t=f*(n*60);
	cout<<"Total Number of Frames: "<<t<<endl;
}