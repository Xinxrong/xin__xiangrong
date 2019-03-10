#include <iostream>
#include "MatrixPlus.h"

using namespace std;

int main()
{
    MatrixPlus matrixA;
    cout<<"Enter matrixA number in the form "<<endl;
    cout<<"1 2"<<endl;
    cout<<"3 4"<<endl;
    cin>>matrixA;
    MatrixPlus matrixB;
    cout<<"Enter matrixA number in the form "<<endl;
    cout<<"1 2"<<endl;
    cout<<"3 4"<<endl;
    cin>>matrixB;
    MatrixPlus matrixC;
    matrixC=matrixA+matrixB;
    cout<<"matrixC=matrixA+matrixB"<<endl;
    cout<<"matrixC="<<endl;
    cout<<matrixC<<endl;

    cout<<"The matrix number entered was:"<<endl;
    cout<<endl;
}
