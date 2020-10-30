#include<stdio.h>
int main ()
{
    int length=0;
    char ch;
    int n,m,i,flag=1;
    scanf("%d%d",&n,&m);
    getchar();
    for(i=0;i<n;i++)
    {
        while((ch=getchar()) != '\n')
        {
            if(ch == 'S')
            {
                length++;
                if(length > m)
                {
                    flag=0;
                }
            }
            if(ch == 'X')
            {
                length--;
                if(length < 0)
                {
                    flag=0;
                }
            }
        }
        if(flag == 1 && length==0)
            printf("YES\n");
        else 
            printf("NO\n");
        length = 0;
        flag = 1;
    }
 } 
