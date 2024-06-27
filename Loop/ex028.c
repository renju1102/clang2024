#include <stdio.h>
main()
{
	int sum, a;
	sum = 0;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &a);
	while (a != -999) {
		sum += a;
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &a);
	}
	printf("‡Œv=%d\n", sum);
}