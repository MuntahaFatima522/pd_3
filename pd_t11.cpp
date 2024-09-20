#include<iostream>
using namespace std;
main()
{
	int age,moves,house;
	float average;
	cout<<"Enter the person's age: ";
	cin>>age;
	cout<<"Enter the number of times they have moved: ";
	cin>>moves;
	house=moves+1;
	average=age/house;
	cout<<"Average number of years lived in the same house: "<<average;
}