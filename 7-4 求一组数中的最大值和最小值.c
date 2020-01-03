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

/*求一组数中的最大值和最小值。

输入格式:
在一行中输入5个整数，数据之间只能用1个空格间隔。

输出格式:
在一行中按照“max=最大值,min=最小值”的格式输出结果，最大值和最小值均原样输出，没有列宽控制。

输入样例:
9 1 5 2 3



输出样例:
max=9,,min=1*/
