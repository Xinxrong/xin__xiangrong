#include <iostream>
#include <cmath>

using namespace std;
double calculateCharges(float h);
int main()
{
    float h,h2,h3,i;
    float h1=1.5;
    double c1,c2,c3,b;
    int a=1;

    c1=calculateCharges(h1);
    c2=calculateCharges(h2);
    c3=calculateCharges(h3);
    cout<<"Enter the hours: ";
    cin>>h1>>h2>>h3;
    cout<<"Car\tHours\tCharge"<<endl;
    cout<<a<<"\t"<<h1<<"\t"<<c1<<endl;
    cout<<a+1<<"\t"<<h2<<"\t"<<c2<<endl;
    cout<<a+2<<"\t"<<h3<<"\t"<<c3<<endl;
    i=h1+h2+h3;
    b=c1+c2+c3;
    cout<<"TOTAL\t"<<i<<"\t"<<b;

    return 0;
}
    double calculateCharges(float h)
    {
        if(h<=3)
            {
                double c;
                c=2.00;
                return c;
            }
        else
            {
                double c;
                c=2.00+(floor(h)+1)*0.50;
                return c;
            }
    };
