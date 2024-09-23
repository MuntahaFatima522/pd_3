#include<iostream>
using namespace std;
main()
{
	int minutes,frames,total;
	cout<<"Number of Minutes: ";
	cin>>minutes;
	cout<<"Frames per Second: ";
	cin>>frames;
	//we multiply n with 60 to convert it into seconds
	total=frames*(minutes*60);
	cout<<"Total Number of Frames: "<<total<<endl;
}