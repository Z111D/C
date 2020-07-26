#include<stdio.h>
#include<string.h>
void reverse(char s[])
{
	void reverser(char s[], int i, int len);
	reverser(s, 0, strlen(s));
}

void reverser(char s[], int i, int len)
{
	int c,j;
	j = len - (i + 1);
	if(i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		reverser(s, ++i, len); //是++1
	}
}

main()
{
	char str[100];
	scanf("%s",str);
	reverse(str);
   	printf("%s",str);
}
