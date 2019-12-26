#include <stdio.h>

void IntSwap(int *x, int *y);
void IntSort3(int *x, int *y, int *z);

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    IntSort3(&a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}

void IntSwap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void IntSort3(int *x, int *y, int *z)
{
    if(*x > *y)IntSwap(x,y);
    if(*x > *z)IntSwap(x,z);
    if(*y > *z)IntSwap(y,z);
}
