#include<stdio.h>
#include <windows.h>
int main()
{
    int l,h,i,n,b;
    printf("Please enter the number of lines in the star matrix :");
    scanf("%d",&n);
    for(b = 1;b <= 40;b++)
    {
        for(h = 1;h <= n;h++)
        {
            for(l = 1;l <= n - h + b;l++)
                printf(" ");
            for(l = 1;l <= 2 * h - 1;l++)
                printf("*");
            printf("\n");
        }
        Sleep(10);
        system("cls");
    }
    return 0;
}
