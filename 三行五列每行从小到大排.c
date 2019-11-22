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
    for(i = 0;i < 3;i++)            //每行
    {
        for(j = 0;j < 4;j++)            //冒泡
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
        printf("%5d\t",*(*(a + i) + j));        //输出
        }
        printf("\n");                           //换行
    }
    return 0;
}
