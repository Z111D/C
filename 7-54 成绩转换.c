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
�ٷ��Ƴɼ�ת��Ϊ�弶�Ʒ���ʱ��90������ΪA��80��89��ΪB��70��79��ΪC��60��69��ΪD��0��59��ΪE��������ʹ��switch�����ɣ�

�����ʽ:
�����ж��飬ÿ������1������score���������������

�����ʽ:
��������ٷ��Ƴɼ�score��Ӧ���ַ��ȼ�����score�Ƿ������"error!"

��������:
���������һ�����롣���磺

1
61
102



�������:
�����������Ӧ����������磺

E
D
error!
*/
