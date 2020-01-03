#include<stdio.h>
int main()
{
    float x;
    int z;
    while(scanf("%f",&x) != EOF)
    {
        if(x == 100)
            printf("A\n");
        else if(x<0)
            printf("error!\n");
        else
        {
            z = x/10;
            switch(z)
            {
                case 8:printf("B\n");break;
                case 9:printf("A\n");break;
                case 7:printf("C\n");break;
                case 6:printf("D\n");break;
                case 5:
                case 4:
                case 3:
                case 2:
                case 1:
                case 0:printf("E\n");break;
                default: printf("error!\n");
            }
        }
    }
    return 0;
}

/*
百分制成绩转换为五级计分制时，90分以上为A，80～89分为B，70～79分为C，60～69分为D，0～59分为E。（建议使用switch语句完成）

输入格式:
测试有多组，每组输入1个整数score。处理到输入结束。

输出格式:
逐行输出百分制成绩score对应的字符等级。若score非法，输出"error!"

输入样例:
在这里给出一组输入。例如：

1
61
102



输出样例:
在这里给出相应的输出。例如：

E
D
error!
*/
