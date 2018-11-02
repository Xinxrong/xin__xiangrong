#include <iostream>
#include "Date.h"

using std::cout;
using std::endl;

int main()
{
    Date date(5,6,1981);
    cout<<"Month:"<<date.getMonth()<<endl;
    cout<<"Day:"<<date.getDay()<<endl;
    cout<<"Year:"<<date.getYear()<<endl;
    cout<<"\nOriginal date:"<endl;
    date.displayDate();
    date.setMonth(13);
    date.setDay(1);
    date.setYear(2005);
    cout<<:\nNew date:"<<endl;
    date.displayDate();


    return 0;
}
