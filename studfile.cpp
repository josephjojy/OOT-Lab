#include<iostream>
#include<fstream>
using namespace std;
class Student
{
	public:
	int id,m1,m2,m3;
	char name[20];

	void accept()
	{
		cout<<"Enter:\n";
		cout<<"ID:";
		cin>>id;
		cout<<"Name:";
		cin.ignore(1,'\n');
		cin.getline(name,20);
		cout<<"Mark1:";
		cin>>m1;
		cout<<"Mark2:";
		cin>>m2;
		cout<<"Mark3:";
		cin>>m3;
	}
	void putdata()
	{
		cout<<"\nID:"<<id<<"\nName:"<<name<<"\nMark1:"<<m1<<"\nMark2:"<<m2<<"\nMark3:"<<m3<<"\n";
	}
};
int main()
{
	Student s;
	ofstream obj("STUDENT.txt");
	char op;
	do
	{
		s.accept();
		obj.write((char*)&s,sizeof(s));
		cout<<"\nMore students(Y/N)?:";
		cin>>op;
	} while(op=='Y');
	obj.close();
	ifstream obj1("STUDENT.txt");
	obj1.read((char*)&s,sizeof(s));
	while(!obj1.eof())
	{
		s.putdata();
		obj1.read((char*)&s,sizeof(s));
	} 
}
