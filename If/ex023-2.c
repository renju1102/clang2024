#include <stdio.h>
main()
{
	int y;
	printf("��������:");
	scanf("%d", &y);
	if (y % 400 == 0) {
		printf("���邤�N�ł�\n");
	}
	else {
		if (y % 4 == 0) {
			if (y % 100 != 0) {
				printf("���邤�N�ł�\n");
			}
			else {
				printf("���邤�N�ł͂Ȃ�\n");
			}
		}
		else {
			printf("���邤�N�ł͂Ȃ�\n");
		}
	}
}