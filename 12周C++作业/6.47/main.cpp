a)  float cube(float);
    float cube(float number)//����floatҪ�Ѻ���������д��
    {
    return number*number*number;
    }


b)  int randomNumber=srand;//һ���������ܵ���һ������


c)  float y=123.45678;
    int=x;
    x=y;//(x,y����һ�����͵�
    cout<<static_cast<float>(x)<<endl;



d)  double square (double number)
    {
        double number;//���ܶ�number���г�ʼ��
        return number*number;
    }


e)  int sum(int n)
{
    if (0==n)
        return 0;
    else
        return n+sum(n);//�����ڶ���sum�����Բ���ֱ��ʹ��
}
