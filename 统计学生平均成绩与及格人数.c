#include <stdio.h>
#define MAXN 1000

int main(void) {
	int N, i, a[MAXN], count;
	float sum, average;

	scanf("%d", &N);    //ѧ��������
	sum = 0, count = 0;
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);    //ѧ���ɼ���
		sum += a[i];    //�ɼ��ܺ͡�
		if (a[i] >= 60)	count++;    //����������
	}
	if (N == 0)	average = 0;    //û��ѧ����ƽ����Ϊ0�֡�
	else	average = sum / N;    //��ƽ���֡�
	printf("average = %.1f\n", average);
	printf("count = %d\n", count);

	return 0;
}
