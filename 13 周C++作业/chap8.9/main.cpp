#include <iostream>

using namespace std;

int main()
{
    unsigned int value1=200000,value2;

    unsigned int *longPtr=&value1;
    cout<<"The value1 of longPtr is:"<<*longPtr<<endl;
    value2=*longPtr;
    cout<<"The values2 is :"<<value2<<endl;
    cout<<"The address of value1 is :"<<&value1<<endl;
    cout<<"The address of longPtr is :"<<longPtr<<endl;

    return 0;
}
