#include <stdio.h>
main()
{
	int num, i;
	printf("��������:");
	scanf("%d", &num);

	i = num;
	while (i > 0) {
		printf("*");
		i--;
	}
}
	//#include <stdio.h>

	//int main() {
	//	int count;
	//	printf("��������");
	//	scanf("%d", &count);
	//
	//	for (int i = 0; i < count; i++) {
	//		printf("*");
	//	}

	//	return 0;
	//}