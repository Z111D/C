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

/*��д���򣬴Ӽ������� n (n<10)��ѧ����ѧ�ţ�ѧ��Ϊ4λ����������1000��ʼ�����ɼ�������ṹ�����У����Ҳ�����ɼ���ߵ�ѧ����Ϣ��

�������ʾ����������Ϊ˵���������������

��������:
3	(n=3)
1000 85
1001 90
1002 75



�������:
1001 90

*/
