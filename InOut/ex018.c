#include<stdio.h>
main()
{
	int d1, d2, d3, sum;
	float avg;

	printf("�������O����:\n");
	scanf("%d%d%d", &d1, &d2, &d3);

	sum = d1 + d2 + d3;
	avg = (float)sum / 3;
	printf("���v=%d \t ����=%.2f", sum, avg);
}