#include <iostream>

using namespace std;
int isperfect();
int main()
{
    cout<<isperfect()<<endl;

    return 0;
}
int isperfect()
{
    int a,i,f;
    for(a=2;a<=1000;a++)
        {
            f=0;
    for(i=1;i<a;i++)
        {
            if(a%i==0)
            {
                cout<<"Factor="<<i<<endl;
                f=f+i;
            }

        }
    if(f==a)
        cout<<a<<endl;
 }
}
