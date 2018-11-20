#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
bool flip();
int main()
{
    unsigned int seed=0;
    cout<<"Enter seed:";
    cin>>seed;
    srand(seed);
    for(unsigned int counter=1;counter<=100;++counter)
    {
        cout<<setw(10)<<(rand()%2);
        if(counter%10==0)
            cout<<endl;

    }
    cout<<flip();
    return 0;
}
bool flip()
{
    int a,i;
    int hand=0;
    int tail=0;
    for (i=1;i<101;i++)
    {
       a=rand()%2;
       if(a==1)
            hand=hand+1;
       if(a==0)
            tail=tail+1;
    }
    cout<<"hand="<<hand<<endl;
    cout<<"tail="<<tail<<endl;


}
