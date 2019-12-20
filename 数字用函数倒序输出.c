#include<stdio.h>
long reverse(long number);
int main()
{
    long number;
    scanf("%ld",&number);
    printf("%ld",reverse (number));
}

long reverse(long number)
{
	int flag;
	int res = 0;
	flag = number < 0 ? -1 : 1;
	if( number < 0)  number = - number;
	while(number != 0)
	{
		res = res * 10 + (number % 10);
		number /= 10;
	}
	return flag*res;
}
