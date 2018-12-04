#include <iostream>

using namespace std;

int main()
{
    for(int a=1;a<=5;a++)
    {
        int x=1;
        for(int i=1;i<=a;i++)
        {
            x=x*i;
        }
        cout<<"The factorial is "<<x<<" with the a is "<<a<<"."<<endl;
    }

    return 0;
}
