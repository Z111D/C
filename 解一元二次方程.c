#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,delta;
    scanf("%lf %lf %lf",&a,&b,&c);
    delta=b*b-4*a*c;
    if(a==0)printf("This is not a quadratic equation");
    else if(delta>=0)printf("X1=%lf,X2=%lf",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
         else if(delta<0)printf("X1=%lf+%lfi,X2=%lf-%lfi",(-b/(2*a)),sqrt(-delta),(-b/(2*a)),sqrt(-delta));
    return 0;
}
