#include <stdio.h>
#define MAXN 1000

int main(void) {
	int N, i, a[MAXN], count;
	float sum, average;

	scanf("%d", &N);    //学生人数。
	sum = 0, count = 0;
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);    //学生成绩。
		sum += a[i];    //成绩总和。
		if (a[i] >= 60)	count++;    //及格人数。
	}
	if (N == 0)	average = 0;    //没有学生，平均分为0分。
	else	average = sum / N;    //求平均分。
	printf("average = %.1f\n", average);
	printf("count = %d\n", count);

	return 0;
}
