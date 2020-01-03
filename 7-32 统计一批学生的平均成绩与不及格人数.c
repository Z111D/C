#include "stdio.h"
int main(int argc,char *argv[]){
	int m,n,l;
    float s;
	for(l=s=m=0,n=0;m>=0;n++)
    {
		scanf("%d",&m);
		if(m<60 && m>=0)
			l++;
		else if(m<0)
			break;
		s+=m;
	}
    if(n == 0) printf("Average = 0.00");
    else printf("Average = %.2f\nCount = %d\n",s/n,l);
	return 0;
}

/*本题要求编写程序，计算学生们的平均成绩，并统计不及格（成绩低于60分）的人数。题目保证输入与输出均在双精度范围内。

输入格式:
输入在一行中给出一系列非负实数，其间以空格分隔。当读到负实数时，表示输入结束，该数字不要处理。

输出格式:
按照以下格式输出：

Average = 成绩均值
Count = 不及格人数



其中平均值精确到小数点后两位，等号的左右各有一个空格。

输入样例1:
67 88 73 54 95 60 0 -1



输出样例1:
Average = 62.43
Count = 2



输入样例2:
-100 90 80 0



输出样例2:
Average = 0.00*/
