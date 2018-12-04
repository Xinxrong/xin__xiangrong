#include <iostream>

using namespace std;

int main()
{
    int y=1;

    for(int i=1;i<1001;i++)
    {
        double b=0.000;
        for(int a=1;a<=i;a++)
        {
                b=b+y*4/(a*2-1);
                y=(-1)*y;
        }
        cout<<"The ¦°("<<i<<") is :"<<b<<endl;
    }
    return 0;
}
