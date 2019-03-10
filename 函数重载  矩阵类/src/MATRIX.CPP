#include "Matrix.h"
#include <iomanip>
using namespace std;

ostream &operator <<(ostream &output ,const Matrix &number)
{
    output<<number.FirstLine<<endl<<number.SecondLine<<endl<<number.ThirdLine;
    return output;
}
istream &operator>>(istream &input ,Matrix &number)
{
    input>>setw(3)>>number.FirstLine;
    input.ignore();
    input>>setw(3)>>number.SecondLine;
    input.ignore();
    input>>setw(3)>>number.ThirdLine;
    return input;
}
