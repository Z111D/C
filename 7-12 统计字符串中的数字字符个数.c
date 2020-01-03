#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s[80];
    int i,count = 0;
    for(i=0;i<80;++i)
    {
        scanf("%c",&s[i]);
        if(s[i] =='\n') break;
    }
    for(i = 0;i < strlen(s);i++)
        if(isdigit(s[i]) != 0)count++;
    printf("%d",count);
    return 0;
}

/*输入一个字符串，统计该字符串中数字字符个数。

输入格式:
输入长度不超过80并以回车结束的字符串。

输出格式:
输出数字字符的个数

输入样例:
例如：

Hello567  World89!



输出样例:
5*/
