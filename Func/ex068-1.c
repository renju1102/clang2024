#include <stdio.h>
main()
{
	int a, b, c, ret;
	printf("3�̐������󔒂ŋ�؂��ē���:");
	ret = scanf("%d%d%d", &a, &b, &c);
	printf("ret=%d a=%d b=%d c=%d\n", ret, a, b, c);
	printf("���������(Ctrl+Z�ŏI��) a:");
	while (scanf("%d", &a) != EOF) { // Ctrl+Z�ŏI��
		printf("a=%d\n", a);
		printf("���������(Ctrl+Z�ŏI��) a:");
	}
}