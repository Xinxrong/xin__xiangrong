#include <iostream>

using namespace std;

int main()
{
    int x=1;
    for(int i=0;(2*i+1)<=15;i++)
    {
        x=x*(2*i+1);
    }
    cout <<"The product is :"<<x<<endl;
    return 0;
}
