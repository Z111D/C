#include<stdio.h>
int main()
{
    int i,s,num,sum;
    num = 0,sum = 0;
    for(i = 1;i <= 10;i++)
    {
        scanf("%d",&num);
        if(num%5 == 0)sum = sum + num;
    }
    printf("s=%d",sum);
    return 0;
}

/*从键盘上输入10个整数，求出其中能被5整除的数的和。

输入格式:
在一行中输入10个用空格间隔的整数。

输出格式:
在一行中按照“s=结果”的顺序输出，结果是原样输出的整数，没有其它附加格式。

输入样例:
1 2 3 4 5 6 70 8 9 11



输出样例:
s=75*/
