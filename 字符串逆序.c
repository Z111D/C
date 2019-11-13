#include<stdio.h>
int main()
{
	int i, j, cnt;
	char ch, a[80], b[80];
	ch = getchar();
	for(i = 0; ch != '\n'; i++){
		a[i] = ch;
		cnt++;
		ch = getchar();
	}
	for(i=0, j=cnt-1; i<cnt; i++, j--)	//i 从零开始所以为i < cnt
			b[j]=a[i];
	for(i=0; i<cnt; i++)
		printf("%c", b[i]);

	return 0;
}
