#include<stdio.h>

int main()
{
    int arr[10];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
        for (int j = 0; j < n; j++)
            printf("%d ", arr[j]);
        printf("\n");
    }
    return 0;
}

/*����n��1��n��10������������ð�����򷨶����С�������򣬹�����n-1�ˣ�Ҫ�����ÿһ�˵����������

�����ʽ:
���������n��������n��������

�����ʽ:
��1�˽��

��2�˽��

......

��n-1�˽��

ÿ����������һ���ո�ÿ������ռһ�С�

��������:
5
4 2 3 2 1



�������:
2 3 2 1 4
2 2 1 3 4
2 1 2 3 4
1 2 2 3 4 */
