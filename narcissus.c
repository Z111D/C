#include<stdio.h>
int main()
{
    int number,a,b,c,d;
    d = 0;
    printf("narcissus number is:\n");
    for(number = 100;number <= 999;number++)
    {
        c = number % 10;
        b = ((number % 100) / 10);
        a = number / 100;
        if(number == ((a * a * a) + (b * b * b) + (c * c * c)))
        {
            printf("%d\t",number);
            d++;
            if(d % 5 == 0)printf("\n");

        }
    }
    return 0;
}
