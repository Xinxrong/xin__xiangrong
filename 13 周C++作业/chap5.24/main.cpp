#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Please a odd from 1 to 19 :";
    cin>>x;
    for(int a=0;a<((x+1)/2);a++)
    {
        for(int  b=0;b<(((x+1)/2)-a);b++)
        {
            cout<<" ";
        }
        for(int c=0;c<(2*a+1);c++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    for(int d=1;d<((x+1)/2);d++)
    {
        for(int e=0;e<=d;e++)
        {
            cout<<" ";
        }
        for(int f=1;f<=(x-2*d);f++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
