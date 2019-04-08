#include<iostream>
using namespace std;
class Employee
{
	protected:
	int sal,exp;
	string name;
	public:
	void input()
	{
		//cin.ignore(1,'\n');
		cout<<"\nName:";
		getline(cin,name);
		cout<<"Salary:";
		cin>>sal;
		cout<<"Experience in years:";
		cin>>exp;
    }
};
class Department:public Employee
{
	public:
	string dept_name;
	void accept()
	{
		cin.ignore(1,'\n');
		cout<<"Department name:";
		getline(cin,dept_name);
	}
};
class Senior:public Department
{
	public:
	void display()
	{
		if(exp>=10)
		{
			cout<<"\n\nName:"<<name;
			cout<<"\nSalary:"<<sal;
			cout<<"\nDepartment:"<<dept_name;
			cout<<"\nExperience:"<<exp;
		}
	}
};
int main()
{
	int i;
	Senior emp[5];
	for(i=0;i<5;i++)
	{
		emp[i].input();
		emp[i].accept();
	}
	cout<<"\nSenior Employees:";
	for(i=0;i<5;i++)
		emp[i].display();	
}
