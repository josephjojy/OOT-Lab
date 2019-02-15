#include<iostream>
using namespace std;
class Fibonacci
{
  int f1,f2,f3,n;
  public:
  void accept()
  {
    cout<<"Enter the limiting number:";
    cin>>n;
  }
  void fib()
  {
    cout<<"Fibonacci Series:";
    f1=0;f2=1;
    while(f1<=n)
    {
      cout<<f1<<" ";
      f3=f1+f2;
      f1=f2;
      f2=f3;
    }
    cout<<"\n";
  }
};
int main()
{
  Fibonacci obj;
  obj.accept();
  obj.fib();
  return 0;
}
