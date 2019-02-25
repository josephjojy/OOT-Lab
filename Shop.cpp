#include<iostream>
using namespace std;
class Shop
{
	
    int code,price;
	public:
	void add()
	{
		cout<<"Code No:";
		cin>>code;
		cout<<"Price:";
		cin>>price;
	}
	int deletei()
	{
		return code;
	}
    int display()
	{
		cout<<"\n\t"<<code<<"\t\t"<<price<<"\n";
		return price;
	}
};
int main()
{
    int ch,p,k,i=0,e=0,sum=0,j,del;
    
	Shop L[50];
	
	do
	{
		cout<<"\nEnter\n1-Add\n2-Delete\n3-Display\n4-exit\n";
    	cin>>ch;
		switch(ch)
		{
			case 1:
				{
					L[i].add();
					i++;
				}break;
			case 2:
				{
					cout<<"Enter code to be deleted:";
					cin>>del;
					for(j=0;j<i;j++)
					{
						if(del==L[j].deletei())
						{
							for(k=j;k<i;k++)
								L[k]=L[k+1];
							i--;
						}
					}
										
				}break;
			case 3:
				{
					sum=0;
					cout<<"\tCode No:\tPrice";
					for(j=0;j<i;j++)
					{	p=L[j].display();sum=sum+p;}
					cout<<"\nTotal Price:"<<sum<<"\n";
				}break;
			case 4:e=1;break;
			default:cout<<"\nInvalid Input\n";
		}
	}while(e==0);
}
