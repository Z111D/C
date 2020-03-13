#include "stdio.h"
#include <stdlib.h>
int main(int argc,char *argv[]){
	double *p,t;
	int n,i,j,k;
	printf("Enter n(int 1<n<11)...\nn=");
	if(scanf("%d",&n)!=1 || n<2 || n>10)
	{//输入n,输错了退出
		printf("Input error, exit...\n");
		return 0;
	}
	if((p=(double *)malloc(sizeof(double)*n))==NULL){//申请内存存放n个实数
		printf("Application memory failure, exit...\n");//申请失败退出
		return 0;
	}
	printf("Please enter the %d real Numbers...\n",n);
	for(i=0;i<n;scanf("%lf",p+i++));//输入n个实数存入数组
		printf("Results:\n");
	for(i=0;i<n;i++){//由大到小排序并输出
		for(k=i,j=k+1;j<n;j++)
			if(*(p+k)<*(p+j))
				k=j;
		if(k-i)
			t=*(p+k),*(p+k)=*(p+i),*(p+i)=t;
		printf(i ? " %.2f" : "%.2f",*(p+i));
	}
	free(p);
	putchar('\n');
	return 0;
}
