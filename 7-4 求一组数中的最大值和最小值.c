#include<stdio.h>
int main()
{
    int a[5],i,max,min;
    for(i = 0;i < 5;i++)
        scanf("%d",&a[i]);
    max = min = a[0];
    for(i = 1;i < 5;i++)
    {
        if(a[i] > max)max = a[i];
        if(a[i] < min)min = a[i];
    }
    printf("max=%d,min=%d",max,min);
    return 0;
}

/*��һ�����е����ֵ����Сֵ��

�����ʽ:
��һ��������5������������֮��ֻ����1���ո�����

�����ʽ:
��һ���а��ա�max=���ֵ,min=��Сֵ���ĸ�ʽ�����������ֵ����Сֵ��ԭ�������û���п���ơ�

��������:
9 1 5 2 3



�������:
max=9,,min=1*/
