#include <stdio.h>
main()
{
	int num, sum, cnt;
	sum = cnt = 0;
	printf("����:");
	while (scanf("%d", &num) != EOF) {
		sum += num;
		cnt++;
		printf("����:");
	}
	printf("���v=%d ����=%.2f\n", sum, (float)sum / cnt);
}