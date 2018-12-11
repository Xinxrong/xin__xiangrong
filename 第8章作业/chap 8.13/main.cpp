#include <iostream>

using namespace std;
void mystery1(char*,const char*);//声明一个函数，函数中有两个char类型的指针变量，

int main()
{
    char string1[80];//char类型的数组有80个元素
    char string2[80];//char类型的变量有80个元素
    cout<<"Enter two string :";//输出
    cin>>string1>>string2;//输入两个数组中的变量
    mystery1(string1,string2);//使用myster1这个函数
    cout<<string1<<endl;//输出string1这个数组
}
void mystery1(char*s1,const char*s2)//定义这个函数
{
    while(*s1!='\0')//while循环
        ++s1;//s1前自增
    for(;(*s1=*s2);++s1,++s2)//for循环
        ;
}
