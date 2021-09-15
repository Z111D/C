#include<stdio.h>
int main()
{
    int k,num[100000],i,max,sum;
    scanf("%d",&k);
    for(i = 0;i < k;i++)
        scanf("%d",&num[i]);
    max = num[0];
     for(i = 0;i < k;i++)
     {
            int sum = 0;
            for(int j = i;j < k;j++)
            {
                sum += num[j];
                if(sum > max)
                    max = sum;
            }
     }
    printf("%d",max);
}

/* https://pintia.cn/problem-sets/15/problems/709 */
