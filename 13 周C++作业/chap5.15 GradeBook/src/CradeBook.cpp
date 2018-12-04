#include "CradeBook.h"
#include <iostream>
using namespace std;


CradeBook::CradeBook(string name)
   :aCount(0),
    bCount(0),
    cCount(0),
    dCount(0),
    fCount(0)
{
    setCourseName(name);
}
void GradeBook::setCourseName(string name)
{
    if(name.size()<=25)
        courseName=name;
    else
    {
        courseName=name.substr(0,25);
        cerr<<"Name\""<<name<<"\"exceeds maximum length (25).\n"<<"Limiting courseName to first 25 characters.\n"<<endl;
    }
}
string GradeBook::getCourseName()const
{
    return courseName;
}
void GradeBook::displayMessage()const
{
    cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!\n"<<endl;
}
void GradeBook::inputGrades()
{
    int grade;
    cout<<"Enter the letter grades."<<endl<<"Enter the EOF character to end input."<<endl;
}
while((grade=cin.get())!=EOF)
    {
        case 'A':
        case 'a':
            ++aCount;
            break;

        case 'B':
        case 'b':
            ++aCount;
            break;

        case 'C':
        case 'c':
            ++aCount;
            break;

        case 'D':
        case 'd':
            ++aCount;
            break;

        case 'F':
        case 'f':
            ++aCount;
            break;

        case '\n':
        case '\t':
        case ' ':
            break;

        default:
            cout<<"Incorrect letter grade entered."
            <<"Enter a new grade."<<endl;
            break;
    }
}

void GradeBook::displayGradeReport()const
{
    cout<<"\n\nNumber of students who received each lettermgrade:"
        <<"\nA"<<aCount
        <<"\nB"<<bCount
        <<"\nC"<<cCount
        <<"\nD"<<dCount
        <<"\nF"<<fCount
        <<endl;
}

