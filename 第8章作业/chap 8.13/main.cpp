#include <iostream>

using namespace std;
void mystery1(char*,const char*);//����һ��������������������char���͵�ָ�������

int main()
{
    char string1[80];//char���͵�������80��Ԫ��
    char string2[80];//char���͵ı�����80��Ԫ��
    cout<<"Enter two string :";//���
    cin>>string1>>string2;//�������������еı���
    mystery1(string1,string2);//ʹ��myster1�������
    cout<<string1<<endl;//���string1�������
}
void mystery1(char*s1,const char*s2)//�����������
{
    while(*s1!='\0')//whileѭ��
        ++s1;//s1ǰ����
    for(;(*s1=*s2);++s1,++s2)//forѭ��
        ;
}
