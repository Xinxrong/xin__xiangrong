#include <iostream>

using namespace std;
bool multiple(int a,int b);
int main()
{
    int a,b;
    int c=1;
    while(c>0)
    {
        cout<<"Please input two number :";
        cin>>a>>b;
        cout<<multiple(a,b)<<endl;
    }
    return 0;
}
bool multiple(int a,int b)
{
    if(b%a==0)
    {
        return true;
    }

    else
    {
        return false;
    }

}
