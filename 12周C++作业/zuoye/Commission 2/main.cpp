#include <iostream>

using namespace std;

int main()
{
    double sales=0;
    cout<<"Enter sales in dollars(-1 to end):";
    cin>>sales;
    while (sales>=-1)
    {
        if(sales==-1)
        {
            break;
        }
        double salary=200;
        salary=200+sales*0.09;
        cout<<"Salary is:$"<<salary<<endl;

        sales=-1;
    }


}
