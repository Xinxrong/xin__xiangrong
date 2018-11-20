#include <iostream>

using namespace std;

int main()
{
    int x,c;
    int a=0;
    int b=0;
    while(a<=10)
    {

        cout<<"counter:"<<a<<endl;
        a=a+1;
        cout<<"number:";
        cin>>x;

        if(x>b)
        {
            cout<<"largest:"<<x<<endl;
            b=x;
        }
        else
        {
            cout<<"largest:"<<b<<endl;

        }



    }

    return 0;
}
