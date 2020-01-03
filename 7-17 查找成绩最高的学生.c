#include<stdio.h>
struct Student
    {
        char num[10];
        int score;
    }s[10];
int main()
{
    int N,i,j;
    int max;
    scanf("%d",&N);
    for(i = 0;i < N;i++)
        scanf("%s %d",&s[i].num,&s[i].score);
    max = s[0].score;
    for(i = 0;i < N;i++)
        if(max < s[i].score)
        {
            max = s[i].score;
            j = i;
        }
    printf("%s %d",s[j].num,max);
    return 0;
}

/*编写程序，从键盘输入 n (n<10)个学生的学号（学号为4位的整数，从1000开始）、成绩并存入结构数组中，查找并输出成绩最高的学生信息。

输入输出示例：括号内为说明，无需输入输出

输入样例:
3	(n=3)
1000 85
1001 90
1002 75



输出样例:
1001 90

*/
