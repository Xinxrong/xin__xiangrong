#include <iostream>
#include <array>
#include <iomanip>
using namespace std;
int recursiveMinimum(int a[],int m);
int main()
{
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"The min number is :"<<recursiveMinimum(a,n);
    return 0;
}
int recursiveMinimum(int a[],int m)
{
    int t ;
    if(m==1)
        return a[0];
    t=recursiveMinimum(a,m-1);
    if(t<=a[m-1])
        return t;
    else
        return a[m-1];
}
