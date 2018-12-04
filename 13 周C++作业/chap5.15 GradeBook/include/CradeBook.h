#ifndef CRADEBOOK_H
#define CRADEBOOK_H
#include <string>

class CradeBook
{
    public:
        explicit CradeBook(std::string);
        void setCourseName(std::string);
        std::string getCoutseName()const;
        void displayMessage()const;
        void inputGrades();
        void displayGradeReport()const;
    private:
        std::string courseName;
        unsigned int aCount;
        unsigned int bCount;
        unsigned int cCount;
        unsigned int dCount;
        unsigned int fCount;
};

#endif // CRADEBOOK_H
