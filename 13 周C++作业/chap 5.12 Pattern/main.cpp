#include <iostream>

using namespace std;

int main()
{
    for(int a=1;a<11;a++)
    {

        for(int i=0;i<a;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int a=1;a<11;a++)
    {
        for(int i=a;i<=10;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int a=1;a<11;a++)
    {
        for(int b=0;b<a;b++)
        {
            cout<<" ";
        }
        for(int i=a;i<=10;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int a=1;a<11;a++)
    {
        for(int i=a;i<=10;i++)
        {
            cout<<" ";
        }
        for(int b=0;b<a;b++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
