#include<stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;
	printf("300まで数を入れて");
	scanf("%d", &ia);
	while (ia != 300) {
		gokei += ia;
		printf("数を入れて");
		scanf("%d", &ia);
	}
	printf("終了");
}