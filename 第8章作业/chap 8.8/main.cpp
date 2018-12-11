#include <iostream>
#include <iomanip>
using namespace std;
#define SIZE 5
int main()
{

    unsigned int values[5]={2,4,6,8,10};
    unsigned int *vPtr;
    for(int i=0;i<5;i++)
    {
        cout<<setw(10)<<values[i];
    }
    cout<<endl;
    vPtr=values;
    vPtr=&values[0];
    for(int j=0;j<5;j++)
    {
        cout<<setw(10)<<*(vPtr+j);
    }
    cout<<endl;
    for(int k=0;k<5;k++)
    {
        cout<<setw(10)<<*(values+k);
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<setw(10)<<vPtr[i];
    }
    cout<<endl;
    cout<<values[4]<<endl;
    cout<<*(values+4)<<endl;
    cout<<vPtr[4]<<endl;
    cout<<*(vPtr+4)<<endl;
    cout<<"The address of vPtr+3 is :"<<(vPtr+3)<<endl;
    cout<<"The value of vPtr+3 is :"<<*(vPtr+3)<<endl;


    return 0;
}
