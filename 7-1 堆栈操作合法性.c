#include<stdio.h>
int main()
{
    int n,m,flag = 0,length = 0;
    char ch;
    scanf("%d %d ",&n,&m);
    for(int i = 0;i < n;i++)
    {
        while((ch = getchar()) != '\n')
        {
            if(ch == 'S')
            {
                length++;
                if(length > m)
                    flag = 1;
            }
            if(ch == 'X')
            {
                length--;
                if(length < 0)
                    flag = 1;
            }
        }
        if(length == 0 && flag == 0)
            printf("YES\n");
        else printf("NO\n");
        length = 0;
        flag = 0;
    }
}