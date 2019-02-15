#include<iostream>
using namespace std;
class Prime
{
  int a,b,i,j;
  public:
  void accept()
  {
    cout<<"Enter the limits:";
    cin>>a>>b;
  }
  void display()
  {
    cout<<"Prime numbers:";
    for(i=a;i<=b;i++)
    {
      for(j=2;j<i;j++)
      {
         if(i%j==0)
            break;
      }
      if(i==j)
        cout<<i<<" ";
    }
   cout<<"\n";
  }
};
int main()
{
   Prime obj;
   obj.accept();
   obj.display();
   return 0;
}
