#include "Matrix.h"
#include <iomanip>
using namespace std;


void Matrix::intput_Matrix()
{
    m_matrix= new int *[M];
    for(int i=0; i<M; i++)
    m_matrix[i] = new int[N];
    for(int i=1; i<=M; i++)
    {
        cout<<"Please enter "<<i<<" line's all number"<<endl;
        for(int j=1; j<=N; j++)
        {
            cin>>m_matrix[i-1][j-1];
        }
    }
}

void Matrix::output_Matrix()
{
    cout<<"The matrix is "<<endl;
    for(int i=1; i<=M; i++)
    {
        for(int j=1; j<=N; j++)
        {
            cout<<m_matrix[i-1][j-1]<<" ";
        }
        cout<<endl;
    }
}


