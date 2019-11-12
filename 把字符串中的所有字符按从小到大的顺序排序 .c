#include<string.h>
#include<stdio.h>
int main()
{
    int i,j,length = 0;
    char a[20];     /*用于存放字符串*/
    char temp;      /*定义一个中间变量temp,用于交换字符的位置*/
    char *p = a;    /*将指针p指向a*/
    /*输入要排序的字符串*/
    gets(p);
    length=strlen(p);   /*计算字符串的长度*/ 
    /*将字符串中的字符按从小到大的顺序进行比较*/
    for(i = 0;i < length - 1;i++)
    {
        for(j = i + 1;j < length;j++)
        if(p[i] > p[j])
        {
            temp = p[i];
            p[i] = p[j];
            p[j] = temp;
        }
    }
    /*输出排序后的字符串*/
    puts(p);
    return 0;
}
