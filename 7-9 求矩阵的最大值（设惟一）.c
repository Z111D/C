#include<stdio.h>

int main()
{
    int a[6][6],i,j,max,row,column,m,n;
    scanf("%d %d",&m,&n);
    for(i = 0;i < m;i++)
    {
        for(j = 0;j < n;j++)
            scanf("%d",&a[i][j]);
    }
    max = a[0][0];
    for(i = 0;i < m;i++)
    {
        for(j = 0;j < n;j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
                row = i;
                column = j;
            }
        }
    }
    printf("%d\n",max);
    printf("%d %d",row,column);
    return 0;
}

/*本题要求编写程序，求一个给定的m×n矩阵的最大值以及位置。题目保证最大值惟一。

输入格式:
输入第一行给出两个正整数m和n（1≤m,n≤6）。随后m行，每行给出n个整数，其间以空格分隔。

输出格式:
输出在第一行中输出最大值，在第二行中按照“行下标 列下标”（下标从0开始）的格式输出最大值的位置。

输入样例:
3 2
6 3
23 -9
6 -1



输出样例:
23
1 0*/
