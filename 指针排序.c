#include<stdio.h>
int main()
{
    int i,j,k,t,a[10];
    int *p = a;
    for(i = 0;i < 10;i++)
        scanf("%d",&*(a + i));
    for(i = 0;i < 9;i++)
    {
        k = i;
        for(j = i + 1;j < 10;j++)
        {
            if(*(a + k) > *(a + j))k = j;
        }
        if(k != i)
        {
            t = *(a + i);
            *(a + i) = *(a + k);
            *(a + k) = t;
        }
    }
    for(i = 0;i < 10;i++)
        printf("%d\t",*(a + i));
    return 0;
}
