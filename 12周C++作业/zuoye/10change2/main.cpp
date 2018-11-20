#include <iostream>
#include<math.h>


using namespace std;

int main()
{
    int n,m,a,b,x,y,z;
    cout<<"Enter a number:";
    cin>>a;


    m=pow(10,n);



    while (x>0)
    {
        x=a%2;
        n=0;
        y=x*m;
        n=n+1;
        a=a-x;
        x=a%2;
        z=x*m;
        b=y+z;

    }

        cout<<"Turn out:"<<b<<endl;

}
