a)  float cube(float);
    float cube(float number)//少了float要把函数的类型写上
    {
    return number*number*number;
    }


b)  int randomNumber=srand;//一个变量不能等于一个函数


c)  float y=123.45678;
    int=x;
    x=y;//(x,y不是一个类型的
    cout<<static_cast<float>(x)<<endl;



d)  double square (double number)
    {
        double number;//不能对number进行初始化
        return number*number;
    }


e)  int sum(int n)
{
    if (0==n)
        return 0;
    else
        return n+sum(n);//这是在定义sum，所以不能直接使用
}
