#include <iostream>

using namespace std;

int main()
{
    int a,b,x=0;
    cout<<"How many number do you want to calculate average :";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        x=x+i;
    }
    b=x/a;
    cout<<"The average is :"<<b;
    return 0;
}
