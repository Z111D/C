#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    char sign = ' ';
    int len;
    int flag;
    len = 0;
    flag = 0;// 0:ǰ���޴ʣ�  1��ǰ���д�
    while( (ch=getchar())!='.')
    {
        if(ch!=' ') len++;
        else if(len!=0)
        { //����һ���ǿո��ַ�
            if(flag!=0) putchar(sign); //����д�
            flag = 1;
            printf("%d",len);
            len = 0;
        }
        else continue;
    }
    if(flag==1 && len!=0) putchar(sign);
    if (len) printf("%d",len);
    return 0;
}

/*��ĳ���Ҫ����һ���ı��������Կո�ָ�Ϊ���ɸ����ʣ���.��������Ҫ���ÿ�����ʵĳ��ȡ�����ĵ����������޹أ����԰������ַ��ţ�����it's��һ�����ʣ�����Ϊ4��ע�⣬���п��ܳ��������Ŀո�����.���������ڡ�

�����ʽ��
������һ���и���һ���ı�����.����

��ʾ����scanf("%c",...);������һ���ַ���ֱ������.Ϊֹ��

�����ʽ��
��һ������������ı���Ӧ�ĵ��ʵĳ��ȣ�ÿ������֮���Կո��������ĩû�����Ŀո�

����������
It's great to see you here.



���������
4 5 2 3 3 4*/
