#include<stdio.h>
main()
{
	int d1, d2, d3, sum;
	float avg;

	printf("整数を三つ入力:\n");
	scanf("%d%d%d", &d1, &d2, &d3);

	sum = d1 + d2 + d3;
	avg = (float)sum / 3;
	printf("合計=%d \t 平均=%.2f", sum, avg);
}