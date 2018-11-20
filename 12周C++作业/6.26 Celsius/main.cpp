#include <iostream>

using namespace std;
float celsius(float f);
float fahrenheit(float c);
int main()
{
    float f=32;
    while(f>=32&&f<=212)
    {
        cout<<f<<"\t"<<celsius(f)<<endl;
        f=f+1;
    }
    float c=0;
    while(c>=0&&c<=100)
    {
        cout<<c<<"\t"<<fahrenheit(c)<<endl;
        c=c+1;
    }
    return 0;
}
float celsius(float f)
{
    float c;
    c=(f-32)*5/9;
    return c;
}
float fahrenheit(float c)
{
    float f;
    f=c*9/5+32;
    return f;
}
