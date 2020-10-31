#include <stdio.h>
#include<string.h>
int main()
{
	int i=0 ;
	char a[20];
	gets(a);
	int j = strlen(a) - 1;
	while (i <= j)
	{
		if (a[i] == a[j])
		{
			i++;
			j--;
		}
		else
		break;
	}
	if (i >= j)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
} 
