#include<stdio.h>
struct Order{
    char name[10];
    float price;
    int amount;
}commodity;
int main()
{
    scanf("%s %f %d",commodity.name,&commodity.price,&commodity.amount);
    printf("%s %.2f %d\n",commodity.name,commodity.price,commodity.amount);
    printf("%.2f",commodity.amount * commodity.price);
    return 0;
}
/*����һ����ʾ��Ʒ�����Ľṹ��Order����Ա��������Ʒ����trade/�ַ����������ۣ�price/ʵ�ͣ���������num/���ͣ���

����һ��Order�ṹ�������������������Ʒ�������ۡ��������������ṹ�岢�����ܼ۸񣨵���*��������

�����ʽ:
��Ʒ�����������пո�

����

����

�����ʽ:
��Ʒ�� ����(����2λС��) ��������1���ո����

�ܼ۸�(����2λС��)

��������:
Jacket
99.8
2



�������:
Jacket 99.80 2
199.60*/
