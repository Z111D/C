#include "stdio.h"
#include <stdlib.h>
int main(int argc,char *argv[]){
	double *p,t;
	int n,i,j,k;
	printf("Enter n(int 1<n<11)...\nn=");
	if(scanf("%d",&n)!=1 || n<2 || n>10)
	{//����n,������˳�
		printf("Input error, exit...\n");
		return 0;
	}
	if((p=(double *)malloc(sizeof(double)*n))==NULL){//�����ڴ���n��ʵ��
		printf("Application memory failure, exit...\n");//����ʧ���˳�
		return 0;
	}
	printf("Please enter the %d real Numbers...\n",n);
	for(i=0;i<n;scanf("%lf",p+i++));//����n��ʵ����������
		printf("Results:\n");
	for(i=0;i<n;i++){//�ɴ�С�������
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
