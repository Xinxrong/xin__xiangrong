#include "MatrixPlus.h"
#include <iomanip>
using namespace std;

ostream &operator <<(ostream &output ,const MatrixPlus &number)
{
    output<<number.a11<<" "<<number.a12<<endl<<number.a21<<" "<<number.a22<<endl;
    return output;
}
istream &operator>>(istream &input ,MatrixPlus &number)
{
    input>>setw(1)>>number.a11;
    input.ignore();
    input>>setw(1)>>number.a12;
    input.ignore();
    input>>setw(1)>>number.a21;
    input.ignore();
    input>>setw(1)>>number.a22;
    return input;
}
MatrixPlus &operator+(MatrixPlus &a,MatrixPlus &b )
{
    MatrixPlus c;
    c.a11=a.a11+b.a11;
    c.a12=a.a12+b.a12;
    c.a21=a.a21+b.a21;
    c.a22=a.a22+b.a22;
    return c;


}
