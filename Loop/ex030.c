#include <stdio.h>
main()
{
	int num, i;
	printf("数を入れて:");
	scanf("%d", &num);
	i = 0;
	while (i <= 10) {
		printf("%d + %d = %d\n", num, i, num + i);
		i++;
	}
}

//#include<stdio.h>
//main()
//{
//	int x, a;
//	printf("数を入れて");
//	scanf("%d", &x);
//	a = 0;

//	while (a < 10) {
//		x + a = (x+a);
//		a++;
//		printf("%d+%d=%d", x + a = (x + a));
//	}
//}