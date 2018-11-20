#include <iostream>

using namespace std;
int DigitalReverse(int y);
int main()
{
    int y;
    cout<<"Please input a number :";
    cin>>y;
    cout<<DigitalReverse(y);
    return 0;
}
int DigitalReverse(int y)
{
    int x,x1,x2,x3,x4;
    x1=y/1000;
    x2=(y-x1*1000)/100;
    x3=(y-x1*1000-x2*100)/10;
    x4=(y-x1*1000-x2*100-x3*10);
    x=x4*1000+x3*100+x2*10+x1;
    return x;
}
