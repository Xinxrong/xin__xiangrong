#include <iostream>

using namespace std;

int main()
{
    int a;
    int b=1;
    if(a>0)
    {
        cout<<"Please input a number:";
        cin>>a;
        while (a>=1)
        {
            b=b*a;
            a=a-1;
        }
        cout<<b;
    }


    return 0;
}
