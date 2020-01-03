#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int i,j;
    gets(a);
    scanf("%d %d",&i,&j);
    strcpy(b,a + i);
    b[j] = '\0';
    puts(b);
}


/*从键盘输入一个字符串，再输入两个整数m和n，将字符串从下标为m的字符开始的n个字符复制到另一个字符数组中。

输入格式:
在第一行中输入一个长度不超过20的字符串，并以回车结束，在第二行中输入用一个空格间隔的两个整数。

输出格式:
在一行中输出满足条件的字符串。

输入样例:
asdfghj
2 3



输出样例:
dfg*/
