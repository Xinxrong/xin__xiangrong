#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a1,a2,a3,a4,a5;
    int b1,b2,b3,b4,b5;
    cin>>a1>>a2>>a3>>a4>>a5;
    b1=floor(a1+0.5);
    b2=floor(a2+0.5);
    b3=floor(a3+0.5);
    b4=floor(a4+0.5);
    b5=floor(a5+0.5);
    cout<<b1<<endl<<b2<<endl<<b3<<endl<<b4<<endl<<b5;
    return 0;
}
