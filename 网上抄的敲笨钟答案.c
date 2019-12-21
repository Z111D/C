#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <memory.h>
#include <time.h>
#include <ctype.h>
int main()
{
    int cases;
    //freopen(\"Data.txt\",\"r\",stdin);
    scanf("%d", &cases);
    getchar();
    while (cases--)
    {
        char words[105];
        gets(words);
        //		for(int i = 0; ; i++)
        //		{
        //			scanf("%c", &words[i]);
        //			if(words[i] == '.')
        //				break;
        //		}
        int len = strlen(words);
        int flagl, flagr, flag;
        flagl = flagr = flag = 0;
        for (int i = 0; i < len - 3; i++)
        {
            if (words[i] == 'o' && words[i + 1] == 'n' && words[i + 2] == 'g' && words[i + 3] == ',')
                flagl = 1;
            if (words[i] == 'o' && words[i + 1] == 'n' && words[i + 2] == 'g' && words[i + 3] == '.')
            {
                flagr = 1;
                int cnt = 0;
                int j;
                for (j = i;; j--)
                {
                    if (words[j] == ' ')
                        cnt++;
                    if (cnt == 3)
                        break;
                }
                flag = j;
            }
        }
        if (flagl == 1 && flagr == 1)
        {
            for (int i = 0; i <= flag; i++)
                printf("%c", words[i]);
            printf("qiao ben zhong.");
        }
        else
            printf("Skipped");
        printf("\n");
    }
    // getchar();
    return 0;
}
