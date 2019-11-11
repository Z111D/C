#include<stdio.h>

int main()
{
    char a[10];
    int i;
    for(i = 0;i <=9;i++)
        scanf("%c",&a[i]);             //正序输入
    for(i = 0;i <= 4;i++)
        {
        a[i] = a[9 - i] + a[i];
        a[9 - i] = a[i] - a[9 - i];
        a[i] = a[i] - a[9 - i];
        }                              //倒序
    for(i = 0;i <= 9;i++)
        printf("%c",a[i]);             //输出
    return 0;
}
