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
/*定义一个表示商品订单的结构体Order，成员包括：商品名（trade/字符串）、单价（price/实型）、数量（num/整型）。

定义一个Order结构体变量，往里面输入商品名、单价、数量，输出这个结构体并计算总价格（单价*数量）。

输入格式:
商品名（不允许有空格）

单价

数量

输出格式:
商品名 单价(保留2位小数) 数量，用1个空格隔开

总价格(保留2位小数)

输入样例:
Jacket
99.8
2



输出样例:
Jacket 99.80 2
199.60*/
