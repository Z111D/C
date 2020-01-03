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
/*输入10个无序的整数，用选择法对10个整数按升序排序。注意：要求排序只排3轮。

输入格式:
在一行中输入10个用空格间隔的无序整数。

输出格式:
在一行中输出变化后的数组，每个整数输出占5列。

输入样例:
8 5 2 6 7 4 1 9 12 10



输出样例:
    1    2    4    6    7    5    8    9   12   10*/
