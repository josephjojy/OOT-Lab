#include<iostream>
using namespace std;
class EMPLOYEE
{
  int EMPCODE;
  string EMPNAME;
  public:
  void getdata()
  {
    cin.ignore(100,'\n');  
    cout<<"\nEmployee Name:";
    getline(cin,EMPNAME);
    cout<<"Employee code:";
    cin>>EMPCODE; 
  }
  void display()
  {
    cout<<"\n\nEmployee Name:"<<EMPNAME;
    cout<<"\nEmployee code:"<<EMPCODE;     
  }
};
int main()
{
   int i,n;
   cout<<"Number of Employee:";
   cin>>n;
   EMPLOYEE EMP[n];
   for(i=0;i<n;i++)
   {
      EMP[i].getdata();
   }
   cout<<"\n\nEmployee Details:\n";
   for(i=0;i<n;i++)
   {
      EMP[i].display();
   } 
}
