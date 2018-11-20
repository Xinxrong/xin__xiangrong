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
        a=1+rand()%1000;
        int c=1;
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
            c=c+1;
        }
        if(c<10)
            cout<<"Either you know the secret or you got lucky!"<<endl;
        if(c==10)
            cout<<"Ahah!You know the secret!"<<endl;
        if(c>10)
            cout<<"You should be able to do better!"<<endl;
    }


    return 0;
}
