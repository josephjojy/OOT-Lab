#include<iostream>
using namespace std;
class Even
{
  int n;
  public:
  void accept()
  {
    cout<<"Enter the number:";
    cin>>n;
  }
  void display()
  {
    if(n%2==0)
     cout<<n<<" is an even number\n";
    else
     cout<<n<<" is an odd number.\n";
  }
};
int main()
{
  Even obj;
  obj.accept();
  obj.display();
  return 0;
}
