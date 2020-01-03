#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int f[20000],i,j = 0,k;
    char a[20000],b;
    for(k = 0;k!=1;)
    {
        for(j = 0;j < 81;j++)
        {
            if(scanf("%c",&a[j]) == EOF)
            {
                return 0;
            }
            if(a[j]== '\n')
            {
                a[j]='\0';
                break;
            }
        }
    scanf("%c%*c",&b);
    f[b]++;
    for(i = 0;i<strlen(a);i++)
    {
        if(f[a[i]]==0)
        printf("%c",a[i]);
    }
    printf("\n");
    f[b] = 0;
    }
}
/*有一行英文文字(字符个数不超过80)，要求删去其中某个字符。此行文字和要删除的字符均由键盘输入。

提示 删除的字符可以为空格. 建议使用scanf("%c%*c",&c);来接受空格的输入。

输入格式:
测试数据有多组，处理到文件尾。每组第一行输入一行英文文字，第二行输入一个要删去的字符。

输出格式:
每组输出删去该字符后的英文文字。

输入样例:
Because of the length of the ordered
o



输出样例:
Because f the length f the rdered*/
