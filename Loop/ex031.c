#include<stdio.h>
main()
{
	int i, a;
	a = 0;
	for (i = 1; i <= 10; i++) {
		a += i;
		printf("1����%d�܂ł̘a=%d\n", i, a);
	}
}