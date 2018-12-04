#include <iostream>

using namespace std;

int main()
{
    int a,b,x;
    cout<<"Please input a number to determine the number of numbers you want to enter: ";
    cin>>a;
    cout<<"And then enter the numbers: ";
    cin>>x;
    for(int i=0;i<a-1;i++)
    {
        cin>>b;
        if(b<x)
        {
            x=b;
        }
        else
        {
            x=x;
        }
    }
    cout<<"The minimum value is :"<<x<<endl;
    return 0;
}
