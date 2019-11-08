#include<stdio.h>
#include<windows.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("输入三角行数和往下移的行数：");
    scanf("%d %d",&a,&f);
    f = f + 1;
    for(e = 1;e <= f;e++)
    {

        for(b = a;b >= 1;b--)
        {
            for(c = 1;c <= a - b + 10;c++)
                printf(" ");
            for(d = 2 * b - 1;d >= 1;d--)
                printf("*");
                printf("\n");
        }
    Sleep(5);
    system("cls");
    for(g = 0;g <= e;g++)
        printf("\n");
    }
    return 0;
}
