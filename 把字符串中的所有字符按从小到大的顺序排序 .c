#include<string.h>
#include<stdio.h>
int main()
{
    int i,j,length = 0;
    char a[20],temp;
    char *p = a;
    gets(p);
    length=strlen(p);
    for(i = 0;i < length - 1;i++)
    {
        for(j = i + 1;j < length;j++)
        if(p[i] > p[j])
        {
            temp = p[i];
            p[i] = p[j];
            p[j] = temp;
        }
    }
    puts(p);
    return 0;
}
