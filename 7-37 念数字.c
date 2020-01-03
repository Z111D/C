#include <stdio.h>
#include <string.h>

int main(){
    char a[1000010];
    scanf("%s",a);
    int n=strlen(a);
    for (int i=0;i<n;i++){
        if (a[i]=='-'){
            printf("fu%c",i!=n-1?' ':'\n');
        }
        else if (a[i]-'0'==0){
            printf("ling%c",i!=n-1?' ':'\n');
        }
        else if (a[i]-'0'==1){
            printf("yi%c",i!=n-1?' ':'\n');
        }
        else if (a[i]-'0'==2){
            printf("er%c",i!=n-1?' ':'\n');
        }
        else if (a[i]-'0'==3){
            printf("san%c",i!=n-1?' ':'\n');
        }
        else if (a[i]-'0'==4){
            printf("si%c",i!=n-1?' ':'\n');
        }
        else if (a[i]-'0'==5){
            printf("wu%c",i!=n-1?' ':'\n');
        }
        else if (a[i]-'0'==6){
            printf("liu%c",i!=n-1?' ':'\n');
        }
        else if (a[i]-'0'==7){
            printf("qi%c",i!=n-1?' ':'\n');
        }
        else if (a[i]-'0'==8){
            printf("ba%c",i!=n-1?' ':'\n');
        }
        else if (a[i]-'0'==9){
            printf("jiu%c",i!=n-1?' ':'\n');
        }
    }
    return 0;
}

/*输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出fu字。十个数字对应的拼音如下：

0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu



输入格式：
输入在一行中给出一个整数，如：1234。

提示：整数包括负数、零和正数。

输出格式：
在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如 yi er san si。

输入样例：
-600



输出样例：
fu liu ling ling*/
