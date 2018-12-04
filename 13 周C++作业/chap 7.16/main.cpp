#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    int x;
    array<int,11>dice={0,0,0,0,0,0,0,0,0,0,0};
    for(int i=1;i<7;i++)
    {
         for(int j=1;j<7;j++)
            {
                x=i+j;
                for(int m=0;m<x;m++)
                {
                    if((m+1)==x)
                    {
                        dice[m-1]=dice[m-1]+1;
                    }
                }

            }
    }
    int n=2;
    cout<<"sum "<<setw(10)<<"number"<<endl;
    for(int a:dice)
    {
        cout<<n<<setw(12)<<a<<endl;
        n++;
    }


    return 0;
}
