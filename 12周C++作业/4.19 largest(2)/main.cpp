#include <iostream>
using namespace std;

int main()
{
        int a=0,number[10],larges=0,larges1=0;
        cout<<"Please input 10 numbers: ";
        while(a<=9)
        {
                cin>>number[a];
                if(number[a]>larges)
                        larges=number[a];
                a++;
        }
        a=0;
        while(a<=9)
        {
                if(number[a]!=larges)
                {
                        if(number[a]>larges1)
                                larges1=number[a];
                }
                a++;
        }
        cout<<larges<<endl;
        cout<<larges1<<endl;
        return 0;
}
