#include <iostream>

using namespace std;
bool iseven(int a);
int main()
{
    int a;
    int b=1;
    while(b>0)
    {
        cout<<"Please input a number :";
        cin>>a;
        cout<<iseven(a)<<endl;
    }
    return 0;
}
bool iseven(int a)
{
    if(a%2==0)
        return true;
    else
        return false;
}
