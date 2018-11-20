#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int m,g;
    int a=0;
    int b=0;
    double M,x;


    while(m>=-1)
    {
        cout<<"Enter miles driven(-1 to quit):";
        cin>>m;
        if(m==-1)
       {
           break;
       }
        else
            cout<<"Enter gallons used : ";
            cin>>g;
            M=m/g;
            cout<<"MPG this trip: "<<setprecision(6)<<M<<endl;
            a=a+g;
            b=b+m;
            x=b/a;
            cout<<"Total MPG: "<<setprecision(6)<<x<<endl;


    }



    return 0;
}
