#include <iostream>

using namespace std;
int power(int base,int exponent);
int main()
{
    int base=1,exponent;
    cout<<"Please input base and exponent: ";
    cin>>base>>exponent;
    cout<<power(base,exponent);
    return 0;
}
int power(int base,int exponent)
{
    while(exponent>1)
    return base*power(base,exponent-1);
}
