#include <stdio.h>
void bubbleSort(int*, int);
int main(void)
{
	int a[10], i, * p, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	p = a;
	bubbleSort(p, n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}
void bubbleSort(int* b, int n)
{
	int i, temp, * p;
	for (i = 0; i < n - 1; i++)
	{
		for (p = b; p < b + n - i - 1; p++)
			if (*p > * (p + 1))
			{
				temp = *p;
				*p = *(p + 1);
				*(p + 1) = temp;
			}
	}
}
