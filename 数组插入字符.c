#include<stdio.h>
#include <string.h>
int main()
{
    int i = 0,j,index;
    char a[1000],c;
    while((c = getchar()) != '#')
    {
        a[i] = c;
        i++;
    }
    i = i + 1;
    printf("����Ҫ������±꼰���ַ���");
    scanf("%d %c",&index,&c);
    for(j = i;j >= index;j--)
    {
        a[j] = a[j - 1];
    }
    a[index] = c;
    for(j = 0;j < i;j++)
        printf("a[%d] = %c\t",j,a[j]);
    return 0;
}
