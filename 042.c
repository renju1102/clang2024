#include<stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;
	printf("300�܂Ő�������");
	scanf("%d", &ia);
	while (ia != 300) {
		gokei += ia;
		printf("��������");
		scanf("%d", &ia);
	}
	printf("�I��");
}