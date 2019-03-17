#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
    Matrix matrix;
    cout<<"Please enter the line number"<<endl;
    cin>>matrix.M;
    cout<<"Please enter the row number"<<endl;
    cin>>matrix.N;

    matrix.intput_Matrix();
    matrix.output_Matrix();
}
