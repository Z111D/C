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

/*����һ���ַ�����ͳ�Ƹ��ַ����������ַ�������

�����ʽ:
���볤�Ȳ�����80���Իس��������ַ�����

�����ʽ:
��������ַ��ĸ���

��������:
���磺

Hello567  World89!



�������:
5*/
