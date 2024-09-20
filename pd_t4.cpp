#include<iostream>
using namespace std;
main()
{
	float i,p;
	int ch;
	cout<<"Enter Imposter Count: ";
	cin>>i;
	cout<<"Enter Player Count: ";
	cin>>p;	
	ch= (i/p)*100;
	cout<<"Chance of being an imposter: "<<ch<<"%";
}