//Exercise 6.44: ex06_44.cpp
//What does this program do?
#include <iostream>//ͷ�ļ�
using namespace std;
int mystery(int,int);//function prototype
int main()//main�����Ķ���
{
    int x=0;//������ʼ��
    int y=0;//������ʼ��
    cout << "Enter two integers:";//���
    cin>>x>>y;//����
    cout<<"The result is "<<mystery(x,y)<<endl;//����ͼ���mystery�������
}//end mian
//Parameter b must be a positive integer to prevent infinite recursion
int mystery(int a,int b)//�����Ķ���
{
    if(1==b)//base case
        return a;//����aֵ
    else//recursion step
        return a+mystery(a,b-1);

}//end function mystery
