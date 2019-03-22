#include<iostream>
using namespace std;
class Account
{
	public:
	string name;
	int acc_no;
	void input()
	{
		cin.ignore(10,'\n');
		cout<<"\nName:";
		getline(cin,name);
		cout<<"Account Number:";
		cin>>acc_no;
	}
};
class Cur_Acct:public Account
{	
	public:
	float bal,in,wd,d;
	
	void deposit()
	{
		cout<<"Deposit amount:";
		cin>>d;
		bal+=d;
	}
	void interest()
	{
		cout<<"Interest %:";
		cin>>in;
		bal*=(1+in/100);
	}
	void withdrawal()
	{
		cout<<"Amount to be withdrawn:";
		cin>>wd;
		if(bal-wd<0)
			cout<<"\nInsufficient Balance";
		else
			bal-=wd;
	}
	void balance()
	{	cout<<"\nBalance="<<bal<<"\n";}
};
class Sav_Acct:public Account
{
	public:
	float bal,in,wd,d;
	
	void deposit()
	{
		cout<<"Deposit amount:";
		cin>>d;
		bal+=d;
	}
	void interest()
	{
		cout<<"Interest %:";
		cin>>in;
		bal*=(1+in/100);
	}
	void withdrawal()
	{
		cout<<"Amount to be withdrawn:";
		cin>>wd;
		if(bal-wd<0)
			cout<<"\nInsufficient Balance";
		else
			bal-=wd;
	}
	void balance()
	{	cout<<"\nBalance="<<bal<<"\n";}
};
int main()
{
	int ch;
	cout<<"\nEnter\n1-Savings Account\n2-Current Account\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
				{
					Sav_Acct obj;
					obj.input();
					do
					{
						cout<<"\nEnter\n1-Deposit\n2-Interest\n3-Withdrawal\n4-Balance\n5-Exit\n";
						cin>>ch;
						switch(ch)
						{
							case 1:obj.deposit();break;
							case 2:obj.interest();break;
							case 3:obj.withdrawal();break;
							case 4:obj.balance();break;
							case 5:ch=0;
							default:cout<<"Invalid input";
						}
						obj.balance();
					}while(ch!=0);
				}break;
		case 2:
				{
					Cur_Acct obj;
					obj.input();
					do
					{
						cout<<"Enter\n1-Deposit\n2-Interest\n3-Withdrawal\n4-Balance\n5-Exit\n";
						cin>>ch;
						switch(ch)
						{
							case 1:obj.deposit();break;
							case 2:obj.interest();break;
							case 3:obj.withdrawal();break;
							case 4:obj.balance();break;
							case 5:ch=0;break;
							default:cout<<"Invalid input";
						}
						obj.balance();
					}while(ch!=0);
				}break;
		default:cout<<"Invalid Input";
	}
	
}

