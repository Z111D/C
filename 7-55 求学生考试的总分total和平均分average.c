#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("sum = %.2f; average = %.2f",a+b+c,(a+b+c)/3);
    return 0;
}

/*
已知一个学生三门课的考试成绩(语文a，数学b，英语c)，求该名学生考试的总分total和平均分average。

输入格式:
在一行中输入学生三门课的考试成绩(语文a，数学b，英语c)，每个成绩之间用空格隔开。

输出格式:
在一行中输出总分total和平均分average，总分和平均分保留2位小数。

输入样例:
75.5 80 94



输出样例:
sum = 249.50; average = 83.17
*/
