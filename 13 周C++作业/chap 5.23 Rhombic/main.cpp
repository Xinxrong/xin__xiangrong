#include <iostream>

using namespace std;

int main()
{
    for(int a=0;a<5;a++)
    {
        for(int  b=0;b<(5-a);b++)
        {
            cout<<" ";
        }
        for(int c=0;c<(2*a+1);c++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    for(int d=1;d<5;d++)
    {
        for(int e=0;e<=d;e++)
        {
            cout<<" ";
        }
        for(int f=1;f<=(9-2*d);f++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
