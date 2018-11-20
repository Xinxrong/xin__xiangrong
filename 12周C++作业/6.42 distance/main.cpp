#include <iostream>
#include <cmath>
using namespace std;
double distance(double x1,double y1,double x2,double y2);
int main()
{
    double x1,x2,y1,y2;
    cout<<"Please enter the coordinates of these two points(x1,y1)(x2,y2):"<<endl;
    cout<<"x1=";
    cin>>x1;
    cout<<"y1=";
    cin>>y1;
    cout<<"x2=";
    cin>>x2;
    cout<<"y2=";
    cin>>y2;
    cout<<"The distance ="<<distance(x1,y1,x2,y2)<<endl;
    return 0;
}
double distance(double x1,double y1,double x2,double y2)
{
    double a,b;
    b=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    a=sqrt(b);
    return a;
}
