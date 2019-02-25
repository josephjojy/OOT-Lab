#include<iostream>
using namespace std;
class Board
{
	float units,charge;
	string name;
	public:
	void read()
	{	
		cin.ignore(100,'\n');
		cout<<"\nName:";
		getline(cin,name);
		cout<<"Units consumed:";
		cin>>units;
	}
	void compute()
	{
		if(units<=100)
			charge=units*.60;
		else if(units<=300)
			charge=60+(units-100)*.80;
		else
			charge=220+(units-300)*.90;
		if(charge<50)
			charge=50;
		if(charge>300)
			charge=charge*(1.15);
	}
	void display()
	{
		cout<<"\n\nName:"<<name;
		cout<<"\nCharge:Rs"<<charge;
	}
};
int main()
{
	int n,i;
	cout<<"No:of users:";
	cin>>n;
	Board Users[n];
	for(i=0;i<n;i++)
	{
		Users[i].read();
		Users[i].compute();
	}
	for(i=0;i<n;i++)
		Users[i].display();
}
