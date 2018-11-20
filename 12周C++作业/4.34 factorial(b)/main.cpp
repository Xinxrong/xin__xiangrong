#include <iostream>
#include <iomanip>
using namespace std;
int factorial(int a);
int main()
{
    float e=1;
    int c;
    int x=1;
    int b=1;
    cout<<"Please input a number:";
        cin>>c;
        while(x<=c)
        {
            b=factorial(x);
            e=e+1/b;
            x=x+1;

        }
        cout<<setprecision(c)<<e<<endl;

    return 0;
}int factorial(int a)
{

    int b=1;
    while (a>=1)
    {
        b=b*a;
        a=a-1;
    }
    return b;


}
