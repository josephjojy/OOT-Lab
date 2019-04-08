#include<iostream>
using namespace std;
class Side
{
	protected:
	int s;
	public:
	void input(int n)
	{
		s=n;
	}
};
class Square:public Side
{
	public:
	int sq;
	void compute()
	{
		sq=s*s;
		cout<<"\nSquare="<<sq;
	}
};
class Cube:public Side
{
	public:
	int c;
	void compute()
	{
		c=s*s*s;
		cout<<"\nCube="<<c<<"\n";
	}
};
int main()
{
	int n;
	cout<<"Enter Number:";
	cin>>n;
	Square obj;
	obj.input(n);
	obj.compute();
	Cube obj1;
	obj1.input(n);
	obj1.compute();

}
