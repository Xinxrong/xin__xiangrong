#include <iostream>

using namespace std;

int main()
{
    int a,a1,a2,a3,a4,a5;
    cin>>a;
    a1=a/10000;
    a2=(a-a1*10000)/1000;
    a3=(a-a1*10000-a2*1000)/100;
    a4=(a-a1*10000-a2*1000-a3*100)/10;
    a5=(a-a1*10000-a2*1000-a3*100-a4*10);
    if(a1==a5&&a2==a4)
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}
