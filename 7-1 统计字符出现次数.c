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
/*����Ҫ���д����ͳ�Ʋ����ĳ�����ַ��ڸ����ַ����г��ֵĴ�����

�����ʽ��
�����һ�и���һ���Իس��������ַ���������80���ַ������ڶ�������һ���ַ���

�����ʽ��
��һ������������ַ��ڸ����ַ����г��ֵĴ�����

����������
programming is More fun!
m



���������
2*/
