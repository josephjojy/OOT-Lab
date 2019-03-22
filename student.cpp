#include<iostream>
using namespace std;
class Student
{
	public:
	int rno;
	void input()
	{
		cout<<"\nEnter RollNo:";
		cin>>rno;
	}
};
class Test:public virtual Student
{
	public:
	int m1,m2;
	void input1()
	{
		cout<<"Enter mark1 and mark2:";
		cin>>m1>>m2;
	}
};
class Sports:public virtual Student
{
	public:
	int scr;
	void input2()
	{
		cout<<"Enter Score:";
		cin>>scr;
	}
};
class Results:public Test,public Sports
{
	public:
	int result;
	void display()
	{
		result=m1+m2+scr;
		cout<<"\nRollNo:"<<rno<<"\nResult="<<result<<"\n";
	}
};
int main()
{
	int n,i;
	cout<<"Enter Number of students:";
	cin>>n;
	Results stud[n];
	for(i=0;i<n;i++)
	{
		stud[i].input();
		stud[i].input1();
		stud[i].input2();
	}
	for(i=0;i<n;i++)
		stud[i].display();
}
