#include <stdio.h>
main()
{
	int d1, d2, flg;
	printf("���Z�q�����:"); //1:+ 2:- 3:* 4:/
	scanf("%d", &flg);
	printf("2�̐��������:");
	scanf("%d%d", &d1, &d2);
	if (flg == 1) { //1:+
		printf("%d\n", d1 + d2);
	}
	else {
		if (flg == 2) { //2:-
			printf("%d\n", d1 - d2);
		}
		else {
			if (flg == 3) { //3:*
				printf("%d\n", d1 * d2);
			}
			else {
				if (flg == 4) {//4:/
					printf("%d\n", d1 / d2);
				}
			}
		}
	}
}