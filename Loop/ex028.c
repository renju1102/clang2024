#include <stdio.h>
main()
{
	int sum, a;
	sum = 0;
	printf("��������:");
	scanf("%d", &a);
	while (a != -999) {
		sum += a;
		printf("��������:");
		scanf("%d", &a);
	}
	printf("���v=%d\n", sum);
}