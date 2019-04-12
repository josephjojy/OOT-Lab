#include<iostream>
using namespace std;
class Polygon
{
	public:
	int a,b;
	void read()
	{
		cout<<"Enter the sides:";
		cin>>a>>b;
	}
	virtual float area()
	{
	}
};
class Triangle:public Polygon
{
	public:
	float area()
	{
		return (.5*a*b);
	}
};
class Rectangle:public Polygon
{
	public:
	float area()
	{
		return (a*b);
	}
};
int main()
{
	float c;
	cout<<"Triangle:\n";
	Triangle T;
	T.read();
	c=T.area();
	cout<<"Area of triangle:"<<c;
	cout<<"\n\nRectangle:\n";
	Rectangle R;
	R.read();
	c=R.area();
	cout<<"Area of rectangle:"<<c<<"\n";
}
