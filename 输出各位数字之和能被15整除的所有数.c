#include<stdio.h>
int he(int num);
int main()
{
    int num,i = 0;
    for(num = 100;num < 1000;num++)
    {
        if(he(num) == 15)
        {
            printf("%4d",num);
            i++;
            if(i % 5 == 0)printf("\n");
        }
    }
}

int he(int num)
{
    int sum = 0;
    if(num < 10)return num;
    else{
        sum += (num%10) + he(num/10);
    }
    return sum;
}
