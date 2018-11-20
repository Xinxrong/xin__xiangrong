
#include <iostream>

using namespace std;
int integerPower(int base,int exponent);
int main()
{
    int base,exponent;
    cout<<"Please input base and exponent:";
    cin>>base>>exponent;
    int y;
    y=integerPower(base,exponent);
    cout<<y;
    return 0;
}
int integerPower(int base,int exponent)
{
    int x=1;
    int a=1;
    while(a<=exponent)
    {
        x=x*base;
        a=a+1;
    }
    return x;
}
