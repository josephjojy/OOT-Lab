#include<iostream>
#include<cmath>
using namespace std;
class Root
{
  float a,b,c,d,x1,x2;
  public:
  void accept()
  {
    cout<<"Enter values of a,b,c:";
    cin>>a>>b>>c;
  }
  void compute()
  {
    cout<<"Roots:\n";
    d=b*b-4*a*c;
    if(d>0)
    {
       x1=(-b+sqrt(d))/(2*a);
       x2=(-b-sqrt(d))/(2*a);
       cout<<"x1="<<x1<<"\nx2="<<x2<<"\n";
    }
    if(d==0)
    {
       x1=(-b)/(2*a);
       cout<<"x="<<x1<<"\n";
    }
    if(d<0)
    {
       x1=(-b)/(2*a);
       x2=sqrt(-d)/(2*a);
       cout<<"x1="<<x1<<"+"<<x2<<"i\nx2="<<x1<<"-"<<x2<<"i\n";
    }
  }
};
int main()
{
   Root obj;
   obj.accept();
   obj.compute();
   return 0;
}
