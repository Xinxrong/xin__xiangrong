#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    int x,y,c=0,a=0,b=1;

    for(int i=1;i<257;i++)
    {
        while(y!=0)
            {
                x=i%2;
                y=(i-x)/2;
                a=a+x*b;
                b=b*10;
                c++;
            }

        cout<<setw(10)<<a;
        if(i%8==0)
            cout<<endl;
    }
    return 0;
}
