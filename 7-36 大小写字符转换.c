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


/*����һ���ַ�������Ǵ�д��ĸ������ת����Сд��ĸ������������Сд��ĸ������ת���ɴ�д��ĸ���������������ǣ��������error

��������:
a



�������:
A



��������:
B



�������:
b



��������:
1



�������:
error*/
