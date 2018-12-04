#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,10>counts={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
    {
        counts[i]=0;
    }
    for(int count:counts)
        cout<<count<<"  ";
    cout<<endl;
    array<int ,15>bonus={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int y;
    for(int bonu:bonus)
    {
        y=bonu+1;
        cout<<y<<"  ";
    }

    cout<<endl;
    double x;
    array<double,12>monthTemperatures={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0,12.0};
    cout<<"Please input 12 numbers what do you want to:"<<endl;
    for(int i=0;i<12;i++)
    {
        cin>>x;
        monthTemperatures[i]=x;
    }
    cout<<endl;
    array<double,5>bestScoures={1,2,3,4,5};
    for(double bestScoure:bestScoures)
    {
        cout<<bestScoure<<endl;
    }

    return 0;
}
