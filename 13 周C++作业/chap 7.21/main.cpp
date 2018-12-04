#include <iostream>
#include <array>
#include <iomanip>
const size_t products =5;
const size_t salespersons=4;
void printArray(const array <array <int,salespersons>,products>&);
using namespace std;

int main()
{
    array<array<int ,salespersons>,products>sales={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int x;
    cout<<"Please input total sale:"<<endl;
    for(int i=1;i<21;i++)
    {
        cin>>x;
        for(size_t product=0;product<sales.size();++product)
        {
            for(size_t salesperson=0;salesperson<sales[product].size();++salesperson)
                sales[product][salesperson]=x;
        }
    }
    cout<<"1"<<setw(10)<<"2"<<setw(10)<<"3"<<setw(10)<<"4"<<setw(10)<<"5"<<endl;
    int total1=0,total2=0,total3=0,total4=0,total5=0,total6=0,total7=0,total8=0,total9=0;
    for(size_t product=0;product<sales.size();++product)
        total1=tatoal1+sales[product][0];
    for(size_t product=0;product<sales.size();++product)
        total2=tatoal2+sales[product][1];
    for(size_t product=0;product<sales.size();++product)
        total3=tatoal3+sales[product][2];
    for(size_t product=0;product<sales.size();++product)
        total4=tatoal4+sales[product][3];
    for(size_t product=0;product<sales.size();++product)
        total5=tatoal5+sales[product][4];
    for(size_t salesperson=0;salesperson<sales[product].size();++salesperson)
        total6=total6+sales[0][salesperson];
    for(size_t salesperson=0;salesperson<sales[product].size();++salesperson)
        total7=total7+sales[1][salesperson];
    for(size_t salesperson=0;salesperson<sales[product].size();++salesperson)
        total8=total8+sales[2][salesperson];
    for(size_t salesperson=0;salesperson<sales[product].size();++salesperson)
        total9=total9+sales[3][salesperson];
    for(int n=1;n<5;n++)
    {
        cout<<n;
        for(size_t product=0;product<salea.size();++product)
        {
            for(size_t salesperson=0;salesperson<sales[product].size();++salesperson)
                cout<<setw(10)<<sales[product][salesperson];
            cout<<totaln<<endl;
        }

    }
    cout<<"  "<<setw(10)<<total6<<setw(10)<<total7<<setw(10)<<total8<<setw(10)<<total9<<endl;
    return 0;
}
void printArray(const array <array<int,salespersons>,products>&a)
{
    for(auto const &product:a)
    {
        for(auto const &salary:product)
            cout<<salary<<'  ';
        cout<<endl;
    }
}
