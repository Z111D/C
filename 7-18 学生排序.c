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
           if(s[j].score>s[j+1].score)//�Է�������
           {
             temp=s[j].score;
             s[j].score=s[j+1].score;
             s[j+1].score=temp;

            //����������Ϻ�ѧ��ҲҪ����
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

 /*��д���򣬴Ӽ������� n (n<10)��ѧ����ѧ�ţ�ѧ��Ϊ4λ����������1000��ʼ�����ɼ�������ṹ�����У����ɼ��ӵ͵����������������ѧ����Ϣ��

�������ʾ����������Ϊ˵���������������

��������:
3	(n=3)
1000 85
1001 90
1002 75



�������:
1002 75
1000 85
1001 90
*/
