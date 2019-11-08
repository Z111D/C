#include<stdio.h>
#include<windows.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the number of line in star matrix:");
    scanf("%d",&a);
    for(e = 1;e <= 10;e++)
    {
        for(b = a;b >= 1;b--)
        {
            for(c = 1;c <= a - b + e;c++)
                printf(" ");
            for(d = 2 * b - 1;d >= 1;d--)
                printf("*");
            printf("\n");
        }
        Sleep(1000);
        system("cls");
    }
    return 0;
}
