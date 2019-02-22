#include<iostream>
using namespace std;
class Bank
{
  int accno,bal,d,w;
  string name,acctype;
  public:
  void assign()
  {
     cout<<"Account type:";
     getline(cin,acctype);
     cout<<"Name:";
     getline(cin,name);
     cout<<"Account Number:";
     cin>>accno;
     cout<<"Balance Amount:Rs";
     cin>>bal;
  }
  void deposit()
  {
     cout<<"Enter the amount:Rs";
     cin>>d;
     bal=bal+d;
     cout<<"Amount has been deposited\n";
  }
  void withdraw()
  {
     cout<<"\nBalance Amount:Rs"<<bal;
     cout<<"\nEnter the amount:Rs";
     cin>>w;
     if(w>bal)
		cout<<"Insufficient Balance\n";
     else
     {
        bal=bal-w;
        cout<<"\nAmount has been withdrawn\n";
     }
  }
  void display()
  {
     cout<<"\nAccount Details:";
     cout<<"\nName:"<<name;
     cout<<"\nBalance:Rs"<<bal<<"\n";
  }
};
int main()
{
  int c;
  Bank obj;
  obj.assign();
  cout<<"\nEnter\n1-Deposit\n2-Withdraw\n";
  cin>>c;
  switch(c)
  {
     case 1:obj.deposit();
            break;
     case 2:obj.withdraw();
            break;
     default:cout<<"Invalid Input";
  }
  obj.display();
}
