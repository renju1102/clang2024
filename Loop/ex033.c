#include <stdio.h>
main()
{
	int i, num, sum;
	printf("����?");
	scanf("%d", &num);
	for (sum = 0, i = 0; num != -999; i++) {
		sum += num;
		printf("����?");
		scanf("%d", &num);
	}
	printf("���v=%d \t ����=%.2f\n", sum, (float)sum / i);
}