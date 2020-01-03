#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[80],ch;
    int i,count = 0;
    gets(a);
    scanf("%c",&ch);
    for(count = 0,i = 0;i < strlen(a);i++)
    {
        if(a[i] == ch)
            count++;
    }
    printf("%d",count);
    return 0;
}
/*本题要求编写程序，统计并输出某给定字符在给定字符串中出现的次数。

输入格式：
输入第一行给出一个以回车结束的字符串（少于80个字符）；第二行输入一个字符。

输出格式：
在一行中输出给定字符在给定字符串中出现的次数。

输入样例：
programming is More fun!
m



输出样例：
2*/
