#include <stdio.h>
main()
{
	int sum, a;
	sum = 0;
	printf("数を入れて:");
	scanf("%d", &a);
	while (a != -999) {
		sum += a;
		printf("数を入れて:");
		scanf("%d", &a);
	}
	printf("合計=%d\n", sum);
}