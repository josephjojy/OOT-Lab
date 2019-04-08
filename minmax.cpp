#include<iostream>
using namespace std;
class Array
{
	int i,max,min;
	public:
	void find_max(int a[],int n)
	{
		max=a[0];
		for(i=1;i<n;i++)
			if(max<a[i])
				max=a[i];
		cout<<"\nMax="<<max;
	}
	void find_min(int a[],int n)
	{
		min=a[0];
		for(i=1;i<n;i++)
			if(min>a[i])
				min=a[i];
		cout<<"\nMin="<<min;
	}
};
int main()
{
	int i,n;
	cout<<"Enter Size of array:";
	cin>>n;
	int a[n];
	cout<<"Enter the elements:\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	Array *b=new Array;
	b->find_max(a,n);
	b->find_min(a,n);
}
