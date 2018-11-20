#include <iostream>
#include <cmath>

using namespace std;
int roundToInteger(double a);
float roundToTenths(double a);
double roundToHundredths(double a);
float roundToThousandths(double a);
int main()
{
    float y2,y4;
    int y1;
    double a,y3;
    cin>>a;
    y1=roundToInteger(a);
    y2=roundToTenths(a);
    y3=roundToHundredths(a);
    y4=roundToThousandths(a);
        cout<<"roundToInteger"<<y1<<endl;
        cout<<"roundToTenths"<<y2<<endl;
        cout<<"roundToHundredths"<<y3<<endl;
        cout<<"roundToThousandths"<<y4<<endl;

    return 0;
}
int roundToInteger(double a)
    {
        int y1;
        y1=floor(a+0.5);
        return y1;
    }
    float roundToTenths(double a)
    {
        float y2;
        y2=floor(a*10+0.5)/10;
        return y2;
    }
    double roundToHundredths(double a)
    {
        double y3;
        y3=floor(a*100+0.5)/100;
        return y3;
    }
    float roundToThousandths(double a)
    {
        float y4;
        y4=floor(a*1000+0.5)/1000;
        return y4;
    }
