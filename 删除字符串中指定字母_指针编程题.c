#include<stdio.h>

int main()
{
    char s[100],*p;
    p = s;
    gets(s);
    for(;*p != '\0';p++)
        if(*p != 'a')
            printf("%c",*p);
    return 0;
}
/*
��ʹ��ָ��ķ�����д���򣬳���Ĺ����ǴӼ�������һ���ַ���(�ַ�������С��100)��ɾ�����е���ĸa����������磬�����ַ���abcaca�����bcc��

��������:
abcaca



�������:
bcc
*/
