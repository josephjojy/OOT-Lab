#include<iostream>
using namespace std;
class Zero
{
	public:
	int a,b;
	void accept()
	{
		cout<<"Enter the numbers:";
		cin>>a>>b;
		if(cin.fail())
			throw('a');
	}
	float div()
	{
		return(a/b);
	}
};
int main()
{
	Zero z;
	
	try
	{
		z.accept();
		if(z.b==0)
			throw(0);
		cout<<"Quotient="<<z.div();
	}
	catch(int a)
	{
		cout<<"Division by 0 not Possible";
	}
	catch(char a)
	{
		cout<<"Differnt datatype";
	}
}
