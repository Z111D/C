#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char a[100];
    int i,alpha = 0,digit = 0,other = 0;
    gets(a);
    for(i = 0;i < (int)strlen(a);i++)
    {
        if(isdigit(a[i]) != 0)digit++;
        else if(isalpha(a[i]) != 0)alpha++;
             else other++;
    }
    printf("%d %d %d",alpha,digit,other);
    return 0;
}
