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

/*����һ�����������ÿ�����ֶ�Ӧ��ƴ����������Ϊ����ʱ�������fu�֡�ʮ�����ֶ�Ӧ��ƴ�����£�

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



�����ʽ��
������һ���и���һ���������磺1234��

��ʾ�������������������������

�����ʽ��
��һ����������������Ӧ��ƴ����ÿ�����ֵ�ƴ��֮���ÿո�ֿ�����ĩû�����Ŀո��� yi er san si��

����������
-600



���������
fu liu ling ling*/
