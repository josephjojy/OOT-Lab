#include<iostream>
using namespace std;
class Complex
{
    int real,img; 
    public:
    void read()
    {
        cout<<"\nReal part:";
        cin>>real;
        cout<<"Imaginary part:";
        cin>>img;
    }
    Complex operator +(Complex z)
    {
        Complex temp;
	 	temp.real=real+z.real;
        temp.img=img+z.img;
		return temp;
    }
    void display()
	{
		cout<<"\nSum="<<real<<"+"<<img<<"i\n";
	}
};
int main()
{
	Complex c1,c2,c3;
    c1.read();
	c2.read();
	c3=c1+c2;
	c3.display();
}
