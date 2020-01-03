#include<stdio.h>
int main()
{
    int a,n,i,sum,temp;
    while(scanf("%d %d",&n,&a) != EOF)
    {
        sum = temp = 0;
        for(i = 0;i < n;i++)
        {
            temp = temp * 10 + a;
            sum += temp;
        }
        printf("%d\n",sum);
    }
    return 0;
}

/*求S=a+aa+aaa+…+aa…a(n个a)之值，其中a是一个数字，如2+22+222+2222+22222(此时n=5)，n(0<n<9)和a由键盘输入。

输入格式:
测试数据有多组，处理到文件尾。每组输入n和a。

输出格式:
每组输出a+aa+aaa+…+aa…a(n个a)之值

输入样例:
在这里给出一组输入。例如：

5 3
8 6



输出样例:
在这里给出相应的输出。例如：

37035
74074068*/
