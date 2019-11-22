#include<stdio.h>
#include<math.h>
int main()
{
    int prime,i,j,k;
    prime = 0;
    for(i = 100;i <= 1000;i++)          //100 - 1000 所有的数
    {
        k = sqrt(i);
        for(j = 2;j <= k;j++)
        {
            if(i%j == 0)break;          //不是质数

        }
        if(j > k)                   //是质数
        {
            prime++;
            printf("%d\t",i);
            if(prime%5 == 0)printf("\n");       //5个一行输出
        }
    }
return 0;
}
