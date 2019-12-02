#include<stdio.h>
int main()
{
    int i,j,k,temp,a[3][5];
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 5;j++)
        {
            scanf("%d",(*(a + i) + j));
        }
    }
    for(i = 0;i < 3;i++)            //every row
    {
        for(j = 0;j < 4;j++)            //bubble
        {
            for(k = 0;k < 4 - j;k++)
            {
                if(*(*(a + i) + k) > (*(*(a + i) + k + 1)))
                {
                    temp = *(*(a + i) + k);
                    *(*(a + i) +k) = *(*(a + i) + k + 1);
                    *(*(a + i)+ k + 1) = temp;
                }
            }
        }
    }
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 5;j++)
        {
        printf("%5d\t",*(*(a + i) + j));        //out put
        }
        printf("\n");
    }
    return 0;
}
