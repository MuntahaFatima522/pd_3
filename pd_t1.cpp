#include<iostream>
using namespace std;
main()
{
	int n,s;
	cout<<"Enter the number of sides of the polygon: ";
	cin>>n;
	s=(n-2)*180;
	cout<<"The sum of integral angles of a "<<n<<" sided polygon is "<<s<<endl;
}