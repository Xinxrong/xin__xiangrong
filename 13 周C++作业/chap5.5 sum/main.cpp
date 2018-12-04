#include <iostream>

using namespace std;

int main()
{
    int a,b,x=0;
    cout <<"Please input a number :";
    cin>>a;
    cout<<"And then enter numbers: ";
    for(int i=0;i<a;i++)
    {
        cin>>b;
        x=x+b;
    }
    cout<<"The sum is :"<<x<<endl;
    return 0;
}
