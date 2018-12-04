#include <iostream>

using namespace std;

int main()
{
    for(int side1=1;side1<=500;side1++)
    {
        for(int side2=1;side2<=500;side2++)
        {
            for(int hypotenuse=1;hypotenuse<=500;hypotenuse++)
            {
                if (side1*side1+side2*side2==hypotenuse*hypotenuse)
                {
                   cout<<"The side1 is :"<<side1<<endl;
                   cout<<"The side2 is :"<<side2<<endl;
                   cout<<"The hypotenuse is :"<<hypotenuse<<endl;
                }
            }
        }
    }
    return 0;
}
