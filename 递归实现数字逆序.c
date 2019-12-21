#include<stdio.h>
void reverse(int n);
int main()
{
    int n;
    scanf("%d",&n);
    reverse(n);
}

void reverse (int num)
{
if (num < 10)
{
    printf("%d", num);
}
else{
    printf("%d",num%10);
    reverse(num/10);
	}
}
