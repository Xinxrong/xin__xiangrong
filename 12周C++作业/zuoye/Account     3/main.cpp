#include<iostream>
using namespace std;

int main()
{
    int number=0;
    cout<<"Enter a number:";
    cin>>number;
    while(number>0)
    {
        int accountnumber;
        cout<<"Enter account number(-1 to quit): ";
        cin>>accountnumber;

        double beginningbalance;
        cout<<"Enter beginning balance: ";
        cin>>beginningbalance;

        double totalcharges;
        cout<<"Enter total charges: ";
        cin>>totalcharges;

        double totalcredits;
        cout<<"Enter total credits: ";
        cin>>totalcredits;

        double creditlimit;
        cout<<"Enter credit limit: ";
        cin>>creditlimit;

        double newbalance=0;
        newbalance=beginningbalance+totalcharges-totalcredits;
        cout<<"New balance is "<<newbalance<<endl;

        if(newbalance>creditlimit)
        {
            cout<<"Account:    "<<accountnumber<<endl;
            cout<<"Credit limit:"<<creditlimit<<endl;
            cout<<"Balance:    "<<newbalance<<endl;
            cout<<"Credit Limit Exceeded"<<endl;
        }
        number--;
    }
}
