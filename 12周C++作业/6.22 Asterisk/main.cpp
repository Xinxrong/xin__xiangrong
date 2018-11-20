#include <iostream>
#include <stdio.h>
using  namespace std;
int side(int n);
int main()
{
    int n;
    cout <<"Please input the line :";
    cin>>n;
    cout<<side(n);
}
int side (int n)
{

    int b=0;
    while(b<n)
    {
        int a=0;
        while(a<n-1)
            {
                cout<<"*";
                a=a+1;
            }
        cout<<"*"<<endl;
        b=b+1;

    }
}



