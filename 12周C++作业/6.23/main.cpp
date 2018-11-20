#include <iostream>

using namespace std;
void side(int n,string fillCharacter);
int main()
{

    int n;
    string fillCharacter;
    cout<<"Please input the line:";
    cin>>n;
    cout<<"Please input the symbol:";
    cin>>fillCharacter;
    side(n,fillCharacter);

    return 0;
}
void side (int n,string fillCharacter)
{

    int b=0;
    while(b<n)
    {
        int a=0;
        while(a<n-1)
            {
                cout<<fillCharacter;
                a=a+1;
            }
        cout<<fillCharacter<<endl;
        b=b+1;

    }
}
