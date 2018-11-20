#include <iostream>

using namespace std;
int primes(int n);
int main()
{
    for(int a=2;a<=10000;a++)
    {
        cout<<primes(a)<<endl;
    }
    return 0;
}
int primes(int n)
{
    int f=0;
    int a;
    for(int i=2;i<n;i++)
    {
        a=n%i;
        if(a==0)
            f=f+1;
    }
        if(f==0)
            return n;

}
