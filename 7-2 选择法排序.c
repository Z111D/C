#include<stdio.h>
void swap(int *a,int *b) ;
void selection_sort(int arr[], int len) ;
int main()
{
    int i,a[10];
    for(i = 0;i < 10;i++)
    {
        scanf("%d",&a[i]);
    }
    selection_sort(a,10);
    for(i = 0;i < 10;i++)
    {
        printf("%5d",a[i]);
    }
    return 0;
}


void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int arr[], int len)
{
    int i,j,k;
    k = 0;
    for (i = 0 ; i < len - 1,k < 3; i++)
    {
        int min = i;
        for (j = i + 1; j < len; j++)
            if (arr[j] < arr[min])
                min = j;
           swap(&arr[min], &arr[i]);
           k++;
    }
}
/*����10���������������ѡ�񷨶�10����������������ע�⣺Ҫ������ֻ��3�֡�

�����ʽ:
��һ��������10���ÿո���������������

�����ʽ:
��һ��������仯������飬ÿ���������ռ5�С�

��������:
8 5 2 6 7 4 1 9 12 10



�������:
    1    2    4    6    7    5    8    9   12   10*/
