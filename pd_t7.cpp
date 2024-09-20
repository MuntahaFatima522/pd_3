#include<iostream>
using namespace std;
main()
{
	string name;
	int p1,p2,n1,n2;
	int tp1,tp2;
	int total,remain;
	float per,donation;
	cout<<"Enter the movie name: ";
	cin>>name;
	cout<<"Enter the adult ticket price: $";
	cin>>p1;
	cout<<"Enter the child ticket price: $";
	cin>>p2;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>n1;
	cout<<"Enter the number of child tickets sold: ";
	cin>>n2;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>per;
	//tp1=total amount from adults ticket
	//tp2=total amount from child ticket
	tp1=p1*n1;
	tp2=p2*n2;
	total=tp1+tp2;
	donation=(per/100)*total;
	remain=total-donation;
	cout<<"                                                            "<<endl;
	cout<<"Movie: "<<name<<endl;
	cout<<"Total amount generated from tickets sale: $"<<total<<endl;
	cout<<"Donation to charity (" <<per<< "%): $"<<donation<<endl;
	cout<<"Remaining amount after donation: $"<<remain;
}
	
