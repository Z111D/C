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

/*����ѧ���Ļ�����Ϣ����ѧ�š����������ſγ̳ɼ��Լ�����ƽ���ɼ�������һ���ܹ���ʾѧ����Ϣ�Ľṹ���͡�����n��1<=n<=10����ѧ���ĳɼ���Ϣ�����㲢���ƽ������ߵ�ѧ����Ϣ��ƽ���ֱ�����λС�������ƽ������ߵ�ѧ���ж����������˳�������һ��ѧ������Ϣ��

�����ʽ:
��������n��1<=n<=10����������n������n��ѧ������Ϣ������ѧ�š����������ſγ̳ɼ�����������

�����ʽ:
��һ�������ƽ������ߵ�ѧ����Ϣ��ѧ�š�������ƽ���֣�������λС������

��������:
3
101 Zhang 78 87 85
102 Wang 91 88 90
103 Li 75 90 84



�������:
num:102,name:Wang,average:89.67*/
