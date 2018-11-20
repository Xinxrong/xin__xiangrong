#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout<<"Please input number: ";
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a)
        cout<<"This can form a triangle."<<endl;
    else
        cout<<"This can not form a triangle."<<endl;

    return 0;
}
