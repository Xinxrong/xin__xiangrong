#include <iostream>

using namespace std;
int triplrByValue(int a);
void tripleByReference(int &number);
int main()
{
    int x=2;
    int y=4;
    cout<<"x="<<x<<"before tripleByValue"<<endl;
    cout<<"Value returned by tripleByValue:"<<triplrByValue(x)<<endl;
    cout<<"x="<<x<<"after tripleByValue"<<endl;
    cout<<"y="<<y<<"before tripleByReference"<<endl;
    tripleByReference(y);
    cout<<"y="<<y<<"after tripleByReference"<<endl;
    return 0;
}
int triplrByValue(int a)
{
    return a=a*3;
}
void tripleByReference(int &number)
{
     number=number*3;
}
