#include<stdio.h>

int main()
{
    char a[10];
    int i;
    for(i = 0;i <=9;i++)
        scanf("%c",&a[i]);
    for(i = 0;i <= 4;i++)
        {
        a[i] = a[9 - i] + a[i];
        a[9 - i] = a[i] - a[9 - i];
        a[i] = a[i] - a[9 - i];
        }
    for(i = 0;i <= 9;i++)
        printf("%c",a[i]);
    return 0;
}
