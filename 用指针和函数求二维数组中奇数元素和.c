#include <stdio.h>
int sumOdd(int (*array)[5], int row)
{
    int sum;
    sum = 0;
    for(int i=0; i<row; i++)
        for(int j=0; j<5; j++)
            if((*(*(array + i) + j) % 2 != 0))sum +=  *(*(array + i) + j);
    return sum;
}
int main(){
    int array[4][5];
    for(int i=0; i<4; i++)
        for(int j=0; j<5; j++)
            scanf("%d",  &array[i][j]);
    printf("%d\n", sumOdd(array,4));  //注意：所填的空之外两端均已有括号，只需填写函数的参数
    return 0;
}
