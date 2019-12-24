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
