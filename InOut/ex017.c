#include<stdio.h>
main()
{
	float a,b,c;

	printf("ˆê‚Â–Ú‚ÌÀ”:");
	scanf("%f", &a);
	printf("“ñ‚Â–Ú‚ÌÀ”:");
	scanf("%f", &b);
	printf("O‚Â–Ú‚ÌÀ”:");
	scanf("%f", &c);
	printf("‡Œv‚Í%.2f", a + b + c);
	printf("•½‹Ï‚Í%.2f", (a + b + c) / 3);
}