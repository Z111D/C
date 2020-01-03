#include<stdio.h>
struct Student
    {
        char num[10];
        char name[10];
        float score1;
        float score2;
        float score3;
        double ave;
    }s[10];
int main()
{
    int N,i,j;
    double max;
    scanf("%d",&N);
    for(i = 0;i < N;i++)
    {
        scanf("%s %s %f %f %f",&s[i].num,&s[i].name,&s[i].score1,&s[i].score2,&s[i].score3);
        s[i].ave = (s[i].score1 + s[i].score2 + s[i].score3) / 3;
    }
    max = s[0].ave;
    for(i = 1;i < N;i++)
        if(s[i].ave > max)
        {
            max = s[i].ave;
            j = i;
        }
    printf("num:%s,name:%s,average:%.2f",s[j].num,s[j].name,s[j].ave);
    return 0;
}

/*假设学生的基本信息包括学号、姓名、三门课程成绩以及个人平均成绩，定义一个能够表示学生信息的结构类型。输入n（1<=n<=10）个学生的成绩信息，计算并输出平均分最高的学生信息，平均分保留两位小数。如果平均分最高的学生有多个，按输入顺序输出第一个学生的信息。

输入格式:
输入整数n（1<=n<=10），在下面n行输入n个学生的信息，包括学号、姓名、三门课程成绩（整数）。

输出格式:
在一行中输出平均分最高的学生信息：学号、姓名、平均分（保留两位小数）。

输入样例:
3
101 Zhang 78 87 85
102 Wang 91 88 90
103 Li 75 90 84



输出样例:
num:102,name:Wang,average:89.67*/
