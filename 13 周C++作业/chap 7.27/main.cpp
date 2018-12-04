#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    int a[1000];
    for(int i=0;i<1001;i++)
        a[i]=1;
    for(int i=2;i<1001;i++)
    {
        for(int j=2;i*j<1001;j++)
            a[i*j]=0;
    }
    for(int x:a)
    {
        cout<<x<<setw(10);
    }


    return 0;
}
