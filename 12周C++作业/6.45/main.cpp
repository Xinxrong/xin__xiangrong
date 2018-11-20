#include <iostream>
using namespace std;
int mystery(int,int);//function prototype
int main()
{
    int x=0;
    int y=0;
    cout << "Enter two integers:";
    cin>>x>>y;
    cout<<"The result is "<<mystery(x,y)<<endl;
}
int mystery(int a,int b)
{
    if(1==b)//base case
        return a;
    if (b<=0)
    {
        cout<<a+mystery(a,b)<<endl;
        //break;
    }


    else
        return a+mystery(a,b-1);

}
