#include<iostream>
using namespace std;
class Count
{
	int count;
    public:
	Count():count(0)
	{
	}
	void operator ++()
	{
		count++;
	}
	void operator --()
	{
		count--;
	}
	int getcount()
	{
		return count;
	}
};
int main()
{
	int ch,count,e=0;
	Count c;
	do
	{
 		cout<<"\nEnter\n1-Enter\n2-Exit\n3-stop\n";
		cin>>ch;
		switch(ch)
		{
			case 1:++c;break;
			case 2:
					{
						count=c.getcount();
						if(count==0)
							cout<<"\nNot Possible\n";
						else
							--c;
					}break;
			case 3:e=1;break;
			default:cout<<"\nInvalid Input\n";
		}
		cout<<"\nNo: of people:"<<c.getcount()<<"\n";
	}while(e==0);
}
