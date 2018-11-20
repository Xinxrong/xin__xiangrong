#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double hypotenuse(double a,double b);
int main()
{
    double a,b,c;
    int d=1;

    while(d<=3)
    {
        cout<<"Please input two sides: ";
        cin>>a>>b;
        c=hypotenuse(a,b);
        cout<<"The bevel is:"<<setprecision(2)<<c<<endl;
        d=d+1;
    }
    return 0;

}


double hypotenuse(double a,double b)
{
    double c,d;
    d=a*a+b*b;
    c=sqrt(d);
    return c;
}
