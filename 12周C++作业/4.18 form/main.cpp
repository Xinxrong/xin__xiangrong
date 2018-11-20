#include <iostream>

using namespace std;

int main()
{
    int b,c,d;
    int a=1;
    cout<<"N\t10*N\t100*N\t1000*N"<<endl;
    while(a<=5)
    {

        b=10*a;
        c=100*a;
        d=1000*a;
        cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<endl;
        a=a+1;

    }
    return 0;
}
