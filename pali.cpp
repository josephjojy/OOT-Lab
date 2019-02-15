#include<iostream>
using namespace std;
class Palindrome
{
   int n,c,ld,s;
   public:
   void accept()
   {
     cout<<"Enter the number:";
     cin>>n;
     c=n;
   }
   void rev()
   {
     while(c!=0)
     {
       ld=c%10;
       s=s*10+ld;
       c=c/10;
     }
   }
   void check()
   {
     if(s==n)
       cout<<n<<" is a Palindrome number\n";
     else
       cout<<n<<" is not a Palindrome number\n";
   }
};
int main()
{
  Palindrome obj;
  obj.accept();
  obj.rev();
  obj.check();
  return 0;
}
