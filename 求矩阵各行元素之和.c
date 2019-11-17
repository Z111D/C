#include<stdio.h>
#define MAXM 100
#define MAXN 100
int main()
{
    int i,j,m,n,a[MAXM][MAXN],sum;
    scanf("%d %d",&m,&n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0;i < m;i++)
    {
        sum = 0;
        for(j = 0;j < n;j++)
        {
            sum += a[i][j];
        }
        printf("%d\n",sum);
    }
    return 0;
}
