#include<stdio.h>
int main()
{
	int m,n,k;
	scanf("%d %d",&m,&n);
	int GDC(int a,int b);//声明函数
	k=GDC(m,n);
	printf("%d",k);
	return 0;
}
int GDC(int a,int b)//定义一个函数求最大公约数
{
	int c;
	while(b)//利用辗转相除法求最大公约数
	{
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}
