#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <string>


class Matrix
{
    friend std::ostream &operator<<( std::ostream&,const Matrix &);
    friend std::istream &operator>>( std::istream&,Matrix &);


    private:
        std::string FirstLine;
        std::string SecondLine;
        std::string ThirdLine;
};

#endif // MATRIX_H
