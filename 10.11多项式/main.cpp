#include<iostream>
#include<process>
#include<algorithm>
using namespace std;

int const max=20;
class Polynomial
{private:
	int zs[max];
	float xs[max];
public:
	Polynomial();
	void set_Pol();
	Polynomial operator +(const Polynomial&);
	Polynomial operator -(const Polynomial&);
	Polynomial operator *(const Polynomial&);
	Polynomial operator +=(const Polynomial&);
	Polynomial operator -=(const Polynomial&);
	Polynomial operator *=(const Polynomial&);
	void output();
};

Polynomial::Polynomial()
{
 for(int i=0;i<=(max-1);i++)
 {zs[i]=0;
  xs[i]=0;
 }
}
void Polynomial::set_Pol()
{
	int m,k=1;

	while(k)
	{
		cout<<"输入项数:";
    	cin>>m;
		if(m<=max)
		{   cout<<"输入各项系数和指数:"<<endl;
		    for(int i=1;i<=max&&i<=m;i++)
			{
				cout<<"请输入第"<<i<<"项系数 指数:";
		    	cin>>xs[i-1]>>zs[i-1];
				if(i-1>0)
				{
					if(zs[i-1]>=zs[i-2]){cout<<"输入错啦,再输入一次"<<endl;i=0;continue;}
				}
			}
            k=0;
		}
	    else cout<<"输入的多项式项数不要超过"<<max-1<<"项!"<<endl;
	}
}

Polynomial Polynomial::operator +(const Polynomial& c2)
{Polynomial c;
 int i1=0,i2=0,i=0;
 while(xs[i1]!=0||c2.xs[i2]!=0)
 {
	 if(zs[i1]==c2.zs[i2])
	 {
		 c.zs[i]=zs[i1];
		 c.xs[i]=xs[i1]+c2.xs[i2];
		 i1=i1+1;
		 i2=i2+1;
		 i=i+1;
	 }
	 if(zs[i1]>c2.zs[i2])
	 {
		 c.zs[i]=zs[i1];
		 c.xs[i]=xs[i1];
		 i=i+1;
		 i1=i1+1;
	 }
	 if(zs[i1]<c2.zs[i2])
	 {
		 c.zs[i]=c2.zs[i2];
		 c.xs[i]=c2.xs[i2];
		 i=i+1;
		 i2=i2+1;
	 }

 }
 return c;
}
Polynomial Polynomial::operator -(const Polynomial& c2)
{Polynomial c;
 int i1=0,i2=0,i=0;
 while(xs[i1]!=0||c2.xs[i2]!=0)
 {
	 if(zs[i1]==c2.zs[i2])
	 {
		 c.xs[i]=xs[i1]-c2.xs[i2];
		 if(c.xs[i]!=0)
		 {
			 c.zs[i]=zs[i1];
		     i=i+1;
		 }
		 i1=i1+1;
		 i2=i2+1;
	 }
	 if(zs[i1]>c2.zs[i2])
	 {
		 c.zs[i]=zs[i1];
		 c.xs[i]=xs[i1];
		 i=i+1;
		 i1=i1+1;
	 }
	 if(zs[i1]<c2.zs[i2])
	 {
		 c.zs[i]=c2.zs[i2];
		 c.xs[i]=-c2.xs[i2];
		 i=i+1;
		 i2=i2+1;
	 }

 }
 return c;
}
Polynomial Polynomial::operator *(const Polynomial& c2)
{   Polynomial operator +(Polynomial);
	Polynomial c;
	for(int i1=0;xs[i1]!=0;i1++)
	{
		int i=0;
		Polynomial c3;
		for(int i2=0;c2.xs[i2]!=0;i2++)
		{
			c3.zs[i]=zs[i1]+c2.zs[i2];
			c3.xs[i]=xs[i1]*c2.xs[i2];
			i=i+1;
			if(i>=max-1){cout<<"所输入的多项式项数过多!";exit(1);}
		}

		c=c+c3;
	}
		return c;
}


Polynomial Polynomial::operator +=(const Polynomial& c2)
{
	Polynomial operator +(const Polynomial&);
    *this=*this+c2;
    return *this;
}
Polynomial Polynomial::operator -=(const Polynomial& c2)
{
	Polynomial operator -(const Polynomial&);
	*this=*this-c2;
	return *this;
}
Polynomial Polynomial::operator *=(const Polynomial& c2)
{
	Polynomial operator *(const Polynomial&);
	*this=*this*c2;
	return *this;
}
void Polynomial::output()
{int i=0;
 if (xs[0]==0)cout<<"0";
 else while(xs[i]!=0)
 {
	 cout<<xs[i]<<"x^"<<zs[i];
	 i=i+1;
	 if(xs[i]!=0)cout<<"+";
 }
 cout<<endl;
}

int main()
{Polynomial c1,c2;

 cout<<"输入第一个多项式:"<<endl;
 c1.set_Pol();
 cout<<"第一个多项式为:"<<endl;
 c1.output();

 cout<<"输入第二个多项式:"<<endl;
 c2.set_Pol();
 cout<<"第二个多项式为:"<<endl;
 c2.output();

 Polynomial c3;
 c3=c1+c2;
 cout<<"第一个多项式与第二个多项式相加:"<<endl;
 c3.output();

 Polynomial c4;
 c4=c1-c2;
 cout<<"第一个多项式与第二个多项式相加减:"<<endl;
 c4.output();

 Polynomial c5;
 c5=c1*c2;
 cout<<"第一个多项式与第二个多项式相乘:"<<endl;
 c5.output();

 Polynomial c6;
 c6=c1;
 c6+=c2;
 cout<<"第一个多项式与第二个多项式相加,并把结果赋给第一个多项式:"<<endl;
 c6.output();

 Polynomial c7;
 c7=c1;
 c7-=c2;
 cout<<"第一个多项式与第二个多项式相减,并把结果赋给第一个多项式:"<<endl;
 c7.output();

 Polynomial c8;
 c8=c1;
 c8*=c2;
 cout<<"第一个多项式与第二个多项式相乘,并把结果赋给第一个多项式:"<<endl;
 c8.output();

return 1;
}

