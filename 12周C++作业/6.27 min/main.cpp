#include <iostream>

using namespace std;
double min(double a,double b,double c);
int main()
{
    double a,b,c;
    cout<<"Please input 3 numbers: ";
    cin>>a>>b>>c;
    cout<<"The minimum value is :"<<min(a,b,c)<<endl;
    return 0;
}
double min(double a,double b,double c)
{
    if(a<b&&a<c)
        return a;
    if(b<a&&b<c)
        return b;
    if(c<a&&c<b)
        return c;
}
