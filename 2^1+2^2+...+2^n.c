#include<stdio.h>
#include<math.h>

int sumnum (int i)
{
    int num;
    num = pow(2,i);
    return num;
}

int main()
{
    int n,i,sum = 0;
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
    {
        sum += sum + sumnum(i);
    }
    printf("result = %d",sum);
    return 0;
}
