#include <stdio.h>
#include <stdlib.h>
 
int main()
{	
    int n,i;
    int *p; 
    float sMax,sMin,sSum =0;
    float sAvg;
    scanf("%d",&n); 
	//����n��int���ֽڳ��� 
    p = (int *)malloc(sizeof(int) * n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",p+i);
    	//������׸�Ԫ��,�Ͱ��׸�Ԫ��ͬʱ��ֵ�������Сֵ 
    	if(i == 0)
    	{
    		sMax = *(p+i);
    		sMin =  *(p+i);	
        }else
	    {
	    	if( *(p+i) > sMax)
	       		sMax =  *(p+i);
		    if( *(p+i) < sMin)
	        	sMin =  *(p+i);
	    }
	    sSum +=  *(p+i);
    }
	
    sAvg = sSum / n;
    printf("average = %.2f\n",sAvg);
    printf("max = %.2f\n",sMax);
    printf("min = %.2f\n",sMin);
    
    //����ָ��p,ʹ����ͬʱ�ǵ��ͷ�,���ڴ����»���ʹ��
    free(p);
 
    return 0;
} 
