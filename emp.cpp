#include<iostream>
using namespace std;
class EMPLOYEE
{
   int empno;
   float basic,da,it,net,gross;
   string name;
   public:
   void read()
   {
    cin.ignore(100,'\n');  
    cout<<"\nEmployee Name:";
    getline(cin,name);
    cout<<"Employee Number:";
    cin>>empno;
    cout<<"Basic Salary:Rs";
    cin>>basic;
   }
   void compute()
   {
     da=(52*basic)/100;
     gross=(da+basic)*12;
     it=(30*gross)/100;
     net=gross-it;
   }
   void display()
   {
     cout<<"\n\nName:"<<name;
     cout<<"\nNet Salary(yearly):Rs"<<net;
   }
};
int main()
{
   int N,i;
   cout<<"Enter Number of Employee:";
   cin>>N;
   EMPLOYEE EMP[N];
   for(i=0;i<N;i++)
   {
      EMP[i].read();
      EMP[i].compute();
   }
   cout<<"\n\n";
   for(i=0;i<N;i++)
      EMP[i].display();
}
