#include<stdio.h>
main()
{
	float a,b,c;

	printf("��ڂ̎���:");
	scanf("%f", &a);
	printf("��ڂ̎���:");
	scanf("%f", &b);
	printf("�O�ڂ̎���:");
	scanf("%f", &c);
	printf("���v��%.2f", a + b + c);
	printf("���ς�%.2f", (a + b + c) / 3);
}