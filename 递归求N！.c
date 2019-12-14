#include<stdio.h>
int N(int n);

int main()
{
int n;
scanf("%d",&n);
printf("%d",N(n));
}

int N(int n)
{
if(n == 1)
    return n;
else
    return n*N(n - 1);
}
