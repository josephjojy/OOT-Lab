#include<iostream>
#include<fstream>
using namespace std;
class Armstrong
{
	int rem,num,sum;
	public:
	int perform(int a)
	{
		return(a*a);
	}
	int arm(int a)
	{
		sum=0;
		num=a;
		while(num!=0)
		{
			rem=num%10;
			sum+=(rem*rem*rem);
			num=num/10;
		}
		return sum;
	}
};
int main()
{
	int a;
	Armstrong S;
	ifstream obj("NUM.dat");
	ofstream ob("Arm.txt");
	obj>>a;
	do
	{
		if(S.arm(a)==a)
		{
			cout<<a<<"is Armstrong\n";
            ob<<S.perform(a)<<"\n";			
		}
	    obj>>a;
	}while(!obj.eof());
}
