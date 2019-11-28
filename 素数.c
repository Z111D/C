#include<stdio.h>
#include<math.h>

int main(void)
{
    void prime(int term);
    int num,i,term[10];
    scanf("%d",&num);
    for(i = 0;i < num;i++)
    {
        scanf("%d",&term[i]);
    }
    for(i = 0;i < num;i++)
    {
        prime(term[i]);
    }
    return 0;
}

    void prime(int term)
{
    int j;
    if(term == 1)printf("No\n");
    else
    {
        for(j = 2;j <= sqrt(term);j++)
        {
            if(term % j == 0)break;
        }
        if(j > sqrt(term))printf("Yes\n");
        else printf("No\n");
    }
}
