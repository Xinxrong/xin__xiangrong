#include <iostream>

using namespace std;

int main()
{
   int h;
   double e,s;
   while (h>=-1)
   {
       cout<<"Enter hours worked(-1 to end): ";
       cin>>h;
       if(h==-1)
       {
           break;
       }
       else
        cout<<"Enter hourly rate of the employee:($00.00) ";
        cin>>e;
        if(h>=40)
            s=400+(h-40)*15;
        else
            s=h*e;
        cout<<"Salary is $"<<s<<endl;
   }
   return 0;
}
