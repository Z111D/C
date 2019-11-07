#include<stdio.h>
#include<math.h>
int main()
{
    int prime,i,j,k;
    prime = 0;
    for(i = 100;i <= 1000;i++)
    {
        k = sqrt(i);
        for(j = 2;j <= k;j++)
        {
            if(i%j == 0)break;

        }
        if(j > k)
        {
            prime++;
            printf("%d\t",i);
            if(prime%5 == 0)printf("\n");
        }
    }
return 0;
}
