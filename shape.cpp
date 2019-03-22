#include<iostream>
using namespace std;
class Area
{
	public:
	int l,b;
	void triangle()
	{
		cout<<"Enter base and Height:";
		cin>>l>>b;
	}
	void rectangle()
	{
		cout<<"Enter length and breadth:";
		cin>>l>>b;
	}
};
class Triangle:public Area
{
	public:
	int area;
	void compute()
	{
		area=.5*l*b;
		cout<<"\nArea="<<area<<"\n";
	}
};
class Rectangle:public Area
{
	public:
	int area;
	void compute()
	{
		area=l*b;
		cout<<"\nArea="<<area<<"\n";
	}
};
int main()
{
	int ch;
	cout<<"Enter\n1-Triangle\n2-Rectangle\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
				{
					Triangle obj;
					obj.triangle();
					obj.compute();
				}break;
		case 2:
				{
					Rectangle obj;
					obj.rectangle();
					obj.compute();
				}break;
		default:cout<<"Invalid Input";
	}
}
