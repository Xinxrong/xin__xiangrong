#include <iostream>
#include <vector>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    vector<int>integers1;
    array<int,20>a;
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
            if(a[i]==integers1[j])
                break;
        }
        if(j==m)
        {
            integers1.push_back(a[i]);
            m++;
        }
    }
    for(int i=0;i<m;i++)
    {
        cout<<integers1[i]<<setw(5);
    }
    return 0;
}
