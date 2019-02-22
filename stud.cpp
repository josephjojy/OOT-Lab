#include<iostream>
using namespace std;
class STUDENT
{
   float USN,m1,m2,m3,avg;
   string name;
   public:
   void read()
   {
    
    cout<<"\nName:";
    getline(cin,name);
    cout<<"USN:";
    cin>>USN;
    cout<<"Mark 1:";
    cin>>m1;    
    cout<<"Mark 2:";
    cin>>m2;   
    cout<<"Mark 3:";
    cin>>m3;   
    cin.ignore(100,'\n');   
   }
   void compute()
   {
     if(m1>m3&&m2>m3)
        avg=(m1+m2)/2;
     else if(m2>m1&&m3>m1)
        avg=(m2+m3)/2;
     else
        avg=(m1+m3)/2;
   }
   void display()
   {
     cout<<"\n\nUSN:"<<USN;
     cout<<"\nName:"<<name;
     cout<<"\nAverage:"<<avg;
   }
};
int main()
{
    int i;
    STUDENT STD[10];
    for(i=0;i<10;i++)
    {
       STD[i].read();
       STD[i].compute();
    }
    for(i=0;i<10;i++)
       STD[i].display();
    
}  
