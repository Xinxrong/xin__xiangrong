//Exerctse 6.43: ex06_43.cpp
//What is wrong with this program?
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int c=0;
    if((c=cin.get())!=EOF)//EOF没有被定义。
    {
        main();
        cout<<c;
    }
}
