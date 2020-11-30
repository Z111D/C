#include<stdio.h>
#include<string.h>
int main()
{
    char a[300]={0}; 
    int i=0,j=0,n=0,maxCount=0,maxStart=0;
    gets(a);
    if(strcmp(a, "\0")==0)
    {
        printf("NULL\n");
        return 0;
	}	
    while(a[j]!='\0')
    {
        while(a[j]>'9'||a[j]<'0') i++,j++;
        while(a[j]<='9'&&a[j]>='0') j++;//a[i]和a[j]之间夹住的是数字
        if(j-i>maxCount)  //用maxCount来记录最长数字连续的个数，用maxStart来记录最大数字串的起始位置
        {
            maxStart=i;
            maxCount=j-i;
        }
        i=j;
    }
    printf("%d %d\n",maxStart,maxCount);
    return 0;
}