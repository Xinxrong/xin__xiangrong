#include <iostream>

using namespace std;
unsigned long fibonacci(unsigned long );
int main()
{

    for(unsigned int counter=0;counter<=10;++counter)
    cout<<"fibonacci("<<counter<<")="<<fibonacci(counter)<<endl;
    cout<<"\nfibonacci(20)="<<fibonacci(20)<<endl;
    cout<<"fibonacci(30)="<<fibonacci(30)<<endl;
    cout<<"fibonacci(35)="<<fibonacci(35)<<endl;
    return 0;
}
unsigned long fibonacci(unsigned long number)
{
    if((0==number)||(1==number))
        return number;
    else
    {
        int a=0;
        int a1=1;
        int x=0;
        while(x<=number)
            {

                a=a+a1;
                x++;
                if(x<number-1)
                    a1=a+a1;
                x++;
            }
            return x;

    }


}
