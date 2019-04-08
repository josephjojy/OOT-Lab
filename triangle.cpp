#include<iostream>
#include <cmath> 
using namespace std;
class Triangle
{
	public:
	float area,s;	
	void Area(int a,int b)
	{
		area=.5*a*b;
		cout<<"Area="<<area;
	}
	void Area(int a)
	{
		area=.433*a*a;
		cout<<"Area="<<area;
	}
	void Area(int a,int b,int c)
	{
		s=(float)(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"Area="<<area;
	}
	
};
int main()
{
	int ch,a,b,c;
	Triangle obj;
	do
	{
		cout<<"\n\nEnter\n1-Right angled\n2-Equilateral\n3-Scalene\n4-Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
					{
						cout<<"Enter values of base and height:";
						cin>>a>>b;
						obj.Area(a,b);
					}break;
			case 2:
					{
						cout<<"Enter value of side:";
						cin>>a;
						obj.Area(a);
					}break;
			case 3:
					{
						cout<<"Enter values of three sides:";
						cin>>a>>b>>c;
						obj.Area(a,b,c);
					}break;
			case 4:cout<<"\nEXIT\n";break;
			default:cout<<"\nInvalid Input\n";
		}
	}while(ch!=4);
}
