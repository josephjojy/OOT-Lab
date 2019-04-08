#include<iostream>
using namespace std;
class Employee
{
	public:
	int id,age,basic;
	string name,design;
	
	void accept()
	{
		cout<<"\n\n\nID:";
		cin>>id;
		cin.ignore(1,'\n');
		cout<<"Name:";
		getline(cin,name);
		cout<<"Age:";
		cin>>age;
		cout<<"Basic Salary:";
		cin>>basic;
		cin.ignore(1,'\n');
		cout<<"Designation:";
		getline(cin,design);		
	}
	void display()
	{
		cout<<"\nDetails:";
		cout<<"\nID:"<<id;
		cout<<"\nName:"<<name;
		cout<<"\nAge:"<<age;
		cout<<"\nBasic Salary:"<<basic;
		cout<<"\nDesignation:"<<design;			
	}
};
class OtherIncome:public virtual Employee
{
	public:
	int income;
	string source;
	
	void read()
	{
		cout<<"\nIncome:";
		cin>>income;
		cin.ignore(1,'\n');
		cout<<"Source:";
		getline(cin,source);
	}
	void show()
	{
		cout<<"\nIncome:"<<income;
		cout<<"\nSource:"<<source;	
	}
};
class Increment:public virtual Employee
{
	public:
	int exp,inc;
	
	void calculateincrement()
	{
		cout<<"Experience(years):";
		cin>>exp;
		if(exp>25)
			inc=5000;
		else
			inc=2000;
	}
};
class NetSalary:public OtherIncome,public Increment
{
	public:
	int tsal;
	
	void netsalary()
	{
		cout<<"\nExperience:"<<exp;
		tsal=basic+income+inc;
		cout<<"\nTotal Salary:"<<tsal<<"\n";
	}
};
int main()
{
	int n,i;
	cout<<"Number of Employees:";
	cin>>n;
	NetSalary obj[n];
	for(i=0;i<n;i++)	
	{	obj[i].accept();	
		obj[i].read();
		obj[i].calculateincrement();
	}
	for(i=0;i<n;i++)	
	{
		obj[i].display();
		obj[i].show();
		obj[i].netsalary();
	}
}
