#include<stdio.h>
int main()
{
    int a,n,i,sum,temp;
    while(scanf("%d %d",&n,&a) != EOF)
    {
        sum = temp = 0;
        for(i = 0;i < n;i++)
        {
            temp = temp * 10 + a;
            sum += temp;
        }
        printf("%d\n",sum);
    }
    return 0;
}

/*��S=a+aa+aaa+��+aa��a(n��a)ֵ֮������a��һ�����֣���2+22+222+2222+22222(��ʱn=5)��n(0<n<9)��a�ɼ������롣

�����ʽ:
���������ж��飬�����ļ�β��ÿ������n��a��

�����ʽ:
ÿ�����a+aa+aaa+��+aa��a(n��a)ֵ֮

��������:
���������һ�����롣���磺

5 3
8 6



�������:
�����������Ӧ����������磺

37035
74074068*/
