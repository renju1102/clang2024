#include <stdio.h>
main()
{
	int num;
	printf("����?");
	scanf("%d", &num);
	do {
		printf("*****\n");
		num--;
	} while (num > 0);
}