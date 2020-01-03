#include <stdio.h>
#include <stdlib.h>
 
int main()
{	
    int n,i;
    int *p; 
    float sMax,sMin,sSum =0;
    float sAvg;
    scanf("%d",&n); 
	//开启n个int的字节长度 
    p = (int *)malloc(sizeof(int) * n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",p+i);
    	//如果是首个元素,就把首个元素同时赋值给最大最小值 
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
    
    //设置指针p,使用完同时记得释放,让内存重新回收使用
    free(p);
 
    return 0;
} 
