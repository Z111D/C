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
/*��һ��Ӣ������(�ַ�����������80)��Ҫ��ɾȥ����ĳ���ַ����������ֺ�Ҫɾ�����ַ����ɼ������롣

��ʾ ɾ�����ַ�����Ϊ�ո�. ����ʹ��scanf("%c%*c",&c);�����ܿո�����롣

�����ʽ:
���������ж��飬�����ļ�β��ÿ���һ������һ��Ӣ�����֣��ڶ�������һ��Ҫɾȥ���ַ���

�����ʽ:
ÿ�����ɾȥ���ַ����Ӣ�����֡�

��������:
Because of the length of the ordered
o



�������:
Because f the length f the rdered*/
