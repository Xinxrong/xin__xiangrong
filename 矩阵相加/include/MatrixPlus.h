#ifndef MATRIXPLUS_H
#define MATRIXPLUS_H

#include <iostream>
#include <string>


class MatrixPlus
{
  public:
    friend std::ostream &operator<<( std::ostream&,const MatrixPlus &);
    friend std::istream &operator>>( std::istream&,MatrixPlus &);


    friend MatrixPlus &operator+(MatrixPlus &,MatrixPlus &);
private:
        int a11;
        int a12;
        int a21;
        int a22;
};

#endif // MATRIX_H
