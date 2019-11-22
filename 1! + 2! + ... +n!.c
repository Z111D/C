#include<stdio.h>
int main()
{
    int sum,i,N,num;
    sum = 0;        //和为0
    num = 1;
    scanf("%d",&N);
    for(i = 1;i <= N;i++)
    {
        num = num * i;      //要加的数
        sum = sum + num;
    }
    printf("%d",sum);
    return 0;
}
