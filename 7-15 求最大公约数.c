#include<stdio.h>
int main()
{
	int m,n,k;
	scanf("%d %d",&m,&n);
	int GDC(int a,int b);//��������
	k=GDC(m,n);
	printf("%d",k);
	return 0;
}
int GDC(int a,int b)//����һ�����������Լ��
{
	int c;
	while(b)//����շת����������Լ��
	{
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}

/*���������������Լ����

�����ʽ:
���������������Կո�ָ���

�����ʽ:
������Լ����

��������:
9 18



�������:
9*/
