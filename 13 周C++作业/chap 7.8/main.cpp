#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int ,7>alphabet={1,2,3,4,5,6,7};
    cout<<"The sixth number of alphabet is :"<<alphabet[6]<<endl;
    array<float,5>grades={10.3,25.6,22.3,77.8,99.2};
    float y;
    cout<<"Please input grade :";
    cin>>y;
    grades[4]=y;
    for(float grade:grades)
    {
        cout<<grade<<" ";
    }
    cout<<endl;
    array<int ,5>values={0,0,0,0,0};
    for(int &valueRef:values)
    {
        valueRef=8;
    }
    for(int value:values)
    {
        cout<<"After"<<value<<endl;
    }
    double x=0.0;
    double a=0.0
    array<double ,100>temperatures;
    for(int i=0;i<100;i++)
    {
        temperatures[i]=a;
        a++;
    }
    for(double temperature:temperatures)
    {
       x=x+temperature;
    }
    cout<<"The sum is :"<<x<<endl;
    array<double,11>a={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0};
    array<double,34>b={11.0,12.0,13.0,14.0,15.0,16.0,17.0,18.0,19.0};
    for(int i=0;i<11;i++)
    {
        b[i]=a[i];
    }
    for(int a:b)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    array<double,99>w;
    for(double a:w)
    {
        if(a<w[0])
        w[0]=a;
    }
    cout<<"The max number is :"<<w[0]<<endl;
    for(double a:w)
    {
        if(a>w[0])
            w[0]=a;
    }
    cout<<"The min number is :"<<w[0]<<endl;
    return 0;
}
