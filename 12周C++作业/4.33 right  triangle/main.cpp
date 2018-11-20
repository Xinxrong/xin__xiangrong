#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Please input numbers:";
    cin>>a>>b>>c;
    if(c>b&&c>a)
    {
        if(a*a+b*b==c*c)
            cout<<"This can form right triangle.";
        else
            cout<<"This can not form right triangle.";
    }
    if(b>a&&b>c)
    {
        if(a*a+c*c==b*b)
            cout<<"This can form right triangle.";
        else
            cout<<"This can not form right triangle.";
    }
    if(a>b&&a>c)
    {
        if(b*b+c*c==a*a)
            cout<<"This can form right triangle.";
        else
            cout<<"This can not form right triangle.";
    }
    return 0;
}
