#include<iostream>
using namespace std;
class Swap
{
	public:
	void swap_value(int a, int b)
	{
		int temp=a;
		a=b;
		b=temp;
		cout<<"A"<<a<<"\tB="<<b;
	}
	void swap_address(int *a,int *b)
	{
		int temp=*a;
		*a=*b;
		*b=temp;
		cout<<"A="<<*a<<"\tB="<<*b;
	}
	void swap_reference(int &a,int &b)
	{
		int temp=a;
		a=b;
		b=temp;
		cout<<"A="<<a<<"\tB="<<b;
	}
};
int main()
{
	int a,b,c;
	Swap obj;
	cout<<"Enter Values of A and B:";
	cin>>a>>b;
	cout<<"Enter\n1-Values\n2-Address\n3-Reference\n";
	cin>>c;
	switch(c)
	{
		case 1:obj.swap_value(a,b);break;
		case 2:obj.swap_address(&a,&b);break;
		case 3:obj.swap_reference(a,b);break;
		default:cout<<"\nInvalid Input\n";
	}
}

