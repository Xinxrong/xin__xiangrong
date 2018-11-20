//Exercise 6.44: ex06_44.cpp
//What does this program do?
#include <iostream>//头文件
using namespace std;
int mystery(int,int);//function prototype
int main()//main函数的定义
{
    int x=0;//变量初始化
    int y=0;//变量初始化
    cout << "Enter two integers:";//输出
    cin>>x>>y;//输入
    cout<<"The result is "<<mystery(x,y)<<endl;//输出和计算mystery这个函数
}//end mian
//Parameter b must be a positive integer to prevent infinite recursion
int mystery(int a,int b)//函数的定义
{
    if(1==b)//base case
        return a;//返回a值
    else//recursion step
        return a+mystery(a,b-1);

}//end function mystery
