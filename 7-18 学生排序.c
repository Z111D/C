#include <stdio.h>
#define  N  8

typedef struct student
{
   int no;
   int score;
}student;

int main()
{
    student s[1000];
    int n,i,j;
    int temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&s[i].no,&s[i].score);
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<n-1;j++)
       {
           if(s[j].score>s[j+1].score)//对分数排序
           {
             temp=s[j].score;
             s[j].score=s[j+1].score;
             s[j+1].score=temp;

            //分数排序完毕后，学号也要交换
             temp=s[j].no;
             s[j].no=s[j+1].no;
             s[j+1].no=temp;
           }
       }

    }
    for(i=0;i<n;i++)
    {
            printf("%d %d\n",s[i].no,s[i].score);
    }
    return 0;
 }

 /*编写程序，从键盘输入 n (n<10)个学生的学号（学号为4位的整数，从1000开始）、成绩并存入结构数组中，按成绩从低到高排序并输出排序后的学生信息。

输入输出示例：括号内为说明，无需输入输出

输入样例:
3	(n=3)
1000 85
1001 90
1002 75



输出样例:
1002 75
1000 85
1001 90
*/
