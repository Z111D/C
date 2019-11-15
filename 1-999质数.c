#include<stdio.h>
#include<math.h>
int main()
{
    int a[1000],i,j;
    for(i = 0;i < 1000;i++)
    {
        a[i] = 1;                   //赋值
    }
    for(i = 2;i <= sqrt(1000);i++)
    {
        if(a[i] == 0)continue;      //重复的
        for(j = i + i;j < 1000;j += i) //使i的倍数为0
        {
            a[j] = 0;
        }
    }
    a[0] = a[1] = 0;
    for(i = 0;i < 1000;i++)
    {
        if(a[i] == 1)printf("%d\t",i);
    }
    return 0;
}
