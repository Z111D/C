#include<stdio.h>

int main()
{
    int a[3][4],i,j,max,row,column;
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4;j++)
            scanf("%d",&a[i][j]);
    }
    max = a[0][0];
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4;j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
                row = i;
                column = j;
            }
        }
    }
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4;j++)
            printf("%d\t",a[i][j]);
        if(j % 4 == 0)printf("\n");
    }
    row = row + 1;
    column = column + 1;
    printf("The maximum number is %d\n",max);
    printf("The maximum is at row %d, column %d",row,column);
    return 0;
}
