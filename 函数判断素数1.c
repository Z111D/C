#include<stdio.h>
#include<math.h>

void prime(int term);

int main(void)
{
    int num,i,term;
    scanf("%d",&num);       //输入数字的个数
    for(i = 1;i <= num;i++)
    {
        scanf("%d",&term);
        prime(term);
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
