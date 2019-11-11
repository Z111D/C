#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k;
    scanf("%d",&i);
    if((i==0)||(i==1)||(i==-1))printf("No");
    else if((i>0)&&(i!=1))
    {   k=sqrt(i);
        for(j=2;j<=k;j++)
        {
            if(i%j==0)break;
        }
        if(j>k)printf("Yes");
        else   printf("No");
    }
        else
        {
            k=-sqrt(-i);
            for(j=-2;j>=k;j--)
            {
                if(i%j==0)break;
            }
            if(j<k)printf("Yes");
            else   printf("No");
        }
    return 0;
}
