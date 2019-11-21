#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i, j, n, max, a[1010], b[1010] = {};
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            if(a[i] == a[j])
                b[i]++;
     max = b[0], j = 0;
     for(i = 0; i < n; i++)
        if(b[i] > max)
        {
            max = b[i];
            j = i;
        }
     printf("%d %d\n", a[j], max);
     return 0;
}
