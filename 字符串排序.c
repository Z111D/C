#include<stdio.h>
#include<string.h>

int main()
{
	char a[10][10],temp;
	int i,j,k;
	for(i = 0;i < 10;i++)
		gets(a[i]);
	for(i = 0;i < 10;i++)					//bubble
		{
			for(j = i;j < 10;j++)
			{
				if((strcmp(a[j],a[i])) < 0)
				{
					for(k = 0;k < 10;k++)
					{
						temp = a[i][k];
						a[i][k] = a[j][k];
						a[j][k] = temp;
					}
				}
			}
		}
	for(i = 0;i < 10;i++)
		printf("\n%s",a[i]);
	return 0;
}
