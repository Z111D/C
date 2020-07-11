#include<stdio.h>
main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c  == ' ')
        {
            putchar(c);
            while ((c = getchar()) == ' '); //û�뵽
        }
        putchar(c);
    }
}
