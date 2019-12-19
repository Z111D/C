#include<stdio.h>
#include<string.h>
int main()
{
    int y, x, n;
    int a[10];
    scanf("%d %d",&y,&n);
    for(int i=y;i<=10000;i++)
    {
        memset(a,0,sizeof(a));
        int num=i;
        while(num>0)
        {
            a[num%10]=1;
            num=num/10;
        }
        if(i<1000)
        a[0]=1;
        int sum=0;
        for(int j=0;j<10;j++)sum=sum+a[j];
        if(sum==n)
        {
            printf("%d %04d",i-y,i);
            break;
        }
    }
    return 0;
 }
