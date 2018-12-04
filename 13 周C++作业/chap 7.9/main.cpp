#include <iostream>
#include <array>
using namespace std;
const size_t rows=2;
const size_t columns=3;
void printArray(const array<array<int,columns>,rows>&);
int main()
{
    array<array<int,columns>,rows>t1={1,2,3,4,5,6};
    t1[0][1]=0;
    cout<<"Values in t1 by row are :"<<endl;
    printArray(t1);
    array<array<int,columns>,rows>t2={1,2,3,4,5,6};
    t2[0][0]=0;
    t2[0][1]=0;
    t2[0][2]=0;
    t2[1][0]=0;
    t2[1][1]=0;
    t2[1][2]=0;
    cout<<"Values in t2 by row are :"<<endl;
    printArray(t2);
    array<array<int,columns>,rows>t4={1,2,3,4,5,6};
    for(size_t row=0;row<t4.size();++row)
    {
        for(size_t column=0;column<t4[row].size();++column)
            t4[row][column]=0;
    }
    cout<<"Values in t4 by row are :"<<endl;
    printArray(t4);
    array<array<int,columns>,rows>t3={1,2,3,4,5,6};
    for(auto const row:t3)
    {
        for(auto int  i:row)
            i=0;
    }
    cout<<"Values in t3 by row are :"<<endl;
    printArray(t3);
    int x;
    array<array<int,columns>,rows>t5={1,2,3,4,5,6};
    cout<<"Please input six numbers:";
    for(size_t row=0;row<t5.size();++row)
    {
        for(size_t column=0;column<t5[row].size();++column)
        {
            cin>>x;
            t5[row][column]=x;
        }

    }
    cout<<"Values in t5 by row are :"<<endl;
    printArray(t5);
    array<array<int,columns>,rows>t6={1,3,5,7,9,0};
    for(size_t row=0;row<t6.size();++row)
    {
        for(size_t column=0;column<t6[row].size();++column)
        {
            if(t6[row][column]<=t6[0][0])
                t6[0][0]=t6[row][column];
        }

    }
    cout<<"The min number is:"<<t6[0][0]<<endl;
    array<array<int,columns>,rows>t7={1,3,2,4,5,6};
    for(size_t column=0;column<t7[0].size();++column)
        cout<<t7[0][column];
    cout<<endl;
    for(size_t column=0;column<t7[1].size();++column)
        cout<<t7[1][column];
    cout<<endl;
    int total=0;
    array<array<int,columns>,rows>t8={1,5,3,2,4,6};
    for(size_t row=0;row<t8.size();++row)
        total=total+t8[row][1];
    cout<<"The sum is :"<<total<<endl;

    return 0;
}
void printArray(const array<array<int,columns>,rows>&a)
{
    for(auto const &row:a)
    {
        for(auto const &element :row)
            cout<<element<< ' ';
        cout<<endl;
    }
}
