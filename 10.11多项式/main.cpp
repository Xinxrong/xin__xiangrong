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
		cout<<"��������:";
    	cin>>m;
		if(m<=max)
		{   cout<<"�������ϵ����ָ��:"<<endl;
		    for(int i=1;i<=max&&i<=m;i++)
			{
				cout<<"�������"<<i<<"��ϵ�� ָ��:";
		    	cin>>xs[i-1]>>zs[i-1];
				if(i-1>0)
				{
					if(zs[i-1]>=zs[i-2]){cout<<"�������,������һ��"<<endl;i=0;continue;}
				}
			}
            k=0;
		}
	    else cout<<"����Ķ���ʽ������Ҫ����"<<max-1<<"��!"<<endl;
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
			if(i>=max-1){cout<<"������Ķ���ʽ��������!";exit(1);}
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

 cout<<"�����һ������ʽ:"<<endl;
 c1.set_Pol();
 cout<<"��һ������ʽΪ:"<<endl;
 c1.output();

 cout<<"����ڶ�������ʽ:"<<endl;
 c2.set_Pol();
 cout<<"�ڶ�������ʽΪ:"<<endl;
 c2.output();

 Polynomial c3;
 c3=c1+c2;
 cout<<"��һ������ʽ��ڶ�������ʽ���:"<<endl;
 c3.output();

 Polynomial c4;
 c4=c1-c2;
 cout<<"��һ������ʽ��ڶ�������ʽ��Ӽ�:"<<endl;
 c4.output();

 Polynomial c5;
 c5=c1*c2;
 cout<<"��һ������ʽ��ڶ�������ʽ���:"<<endl;
 c5.output();

 Polynomial c6;
 c6=c1;
 c6+=c2;
 cout<<"��һ������ʽ��ڶ�������ʽ���,���ѽ��������һ������ʽ:"<<endl;
 c6.output();

 Polynomial c7;
 c7=c1;
 c7-=c2;
 cout<<"��һ������ʽ��ڶ�������ʽ���,���ѽ��������һ������ʽ:"<<endl;
 c7.output();

 Polynomial c8;
 c8=c1;
 c8*=c2;
 cout<<"��һ������ʽ��ڶ�������ʽ���,���ѽ��������һ������ʽ:"<<endl;
 c8.output();

return 1;
}

