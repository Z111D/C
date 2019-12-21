#include<stdio.h>
#include<math.h>
int isprime(int num);
int sumnum(int num);

int main()
{
    int num;
    scanf("%d",&num);
    if(isprime(num)&&isprime(sumnum(num)))
        printf("yes");
    else printf("no");

}

int isprime(int num)
{
    int i,j;
    j = sqrt(num);
    for(i = 2;i < j;i++)
    {
        if(num % i == 0)break;
    }
    if(i <= j)
        return 0;
    if(i > j)
        return 1;
}

int sumnum(int num)
{
    int sum = 0;
    if(num < 10)return num;
    else
    {
        sum += sumnum(num / 10) +num % 10;
        return sum;
    }
}
