#include <stdio.h>
main()
{
	float x[1][1], sum;
	int i, j, a;
	for (i = 0; i < 4; i++) {
		for (sum = 0, j = 0; j < 3; j++) {
		
				printf("x[%d][%d] = ", i, j);
				scanf("%f", &x[i][j]);
				sum += x[i][j];
			}
			printf("%ds–Ú‚Ì•½‹Ï = %.2f\n\n", i, sum / 2);
		}
	
}