#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    for(unsigned int counter=1;counter<=1000;++counter)
    {
        unsigned int seed=0;
        cout<<"Enter seed: ";
        cin>>seed;
        srand(seed);
        cout<<"I have a number between 1 and 1000.\nCan you guess my number ?\nPlease type your first guess."<<endl;
        int a,b;

        a=rand()%1000;

        while(b>0)
        {
            cin>>b;
            if(b>a)
                cout<<"Too high.Try again."<<endl;
            if(b<a)
                cout<<"Too low.Try again."<<endl;
            if(b==a)
            {
                cout<<"Excellent! You guessed the number!\nWould you like to play again(y or n)?"<<endl;
                break;
            }
        }
    }


    return 0;
}
