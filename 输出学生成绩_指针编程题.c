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

/*
本题要求编写程序，根据输入学生的成绩，统计并输出学生的平均成绩、最高成绩和最低成绩。建议使用动态内存分配来实现。

输入格式：
输入第一行首先给出一个正整数N，表示学生的个数。接下来一行给出N个学生的成绩，数字间以空格分隔。

输出格式：
按照以下格式输出：

average = 平均成绩
max = 最高成绩
min = 最低成绩

      
    
结果均保留两位小数。

输入样例：
3
85 90 95

      
    
输出样例：
average = 90.00
max = 95.00
min = 85.00
*/
