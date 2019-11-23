#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[99];
    int i,alpha = 0,digit = 0,other = 0;
    for(i = 0;i < 98;i++)
    {
        a[i] = getchar();
        if(a[i] == '\n')break;
        else if(isdigit(a[i]) != 0)digit++;
             else if(isalpha(a[i]) != 0)alpha++;
                  else other++;
    }
    printf("%d %d %d",alpha,digit,other);
    return 0;
}
