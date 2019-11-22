#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    ch = getchar();
    if(isalpha(ch) !=  0)printf("character");
    else if(isdigit(ch) != 0)printf("digit");
         else printf("ERROE");
    return 0;
}
