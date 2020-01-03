#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>=65&&c<=90)
    {
        c=c+32;
        printf("%c",c);
    }
    else if(c>=97&&c<=122)
    {
        c=c-32;
        printf("%c",c);
    }
    else printf("error");
return 0;
}


/*输入一个字符，如果是大写字母，将它转换成小写字母并输出；如果是小写字母，将它转换成大写字母并输出；如果都不是，则输出：error

输入样例:
a



输出样例:
A



输入样例:
B



输出样例:
b



输入样例:
1



输出样例:
error*/
