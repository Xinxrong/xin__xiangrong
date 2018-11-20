#include <iostream>

using namespace std;
inline double circle(const double r)
{
    return 3.14*r*r;
}
int main()
{
    int r;
    cout<<"Please enter a radius:";
    cin>>r;
    cout<<"The circle area is"<<circle(r)<<endl;
    return 0;
}
