#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    array<int,20>a;
    array<int,20>b;
    int x,y=0,m=0;
    cout<<"Please input some numbers what you want to :";
    while(y<20)
    {
        cin>>x;
        if(x<=100&&x>=10)
        {
            a[y]=x;
            y++;
        }
    }
    for(int i=0;i<20;i++)
    {
        int j=0;
        for(;j<m;j++)
        {
            if(a[i]==b[j])
                break;
        }
        if(j==m)
        {
            b[m]=a[i];
            m++;
        }
    }
    for(int i=0;i<m;i++)
    {
        cout<<b[i]<<setw(5);
    }
    return 0;
}
