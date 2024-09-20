#include<iostream>
using namespace std;
main()
{
	float fpc,vpc,tfc,tvc,tfr,tvr,total;
	int fw,vw;
	//fpc=fruit price in coins
	//vpc=vegetable price in coins
	//fw=total weight of fruits
	//vw=total weight of vegetables
	//tfc=total price of fruits in coins
	//tvc=total price of vegetables in coins
	//tfr=total price of fruits in rupees
	//tvr=total price of vegetables in rupees
	cout<<"Enter vegetable price per kilogram(in coins): ";
	cin>>vpc;
	cout<<"Enter fruit price per kilogram(in coins): ";
	cin>>fpc;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>vw;
	cout<<"Enter total kilograms of fruits: ";
	cin>>fw;
	tfc=fw*fpc;
	tvc=vw*vpc;
	tfr=tfc/1.94;
	tvr=tvc/1.94;
	total=tfr+tvr;
	cout<<"Total earning in Rupees(Rps): "<<total;
}
	
	