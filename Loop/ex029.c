#include <stdio.h>
main()
{
	int num, i;
	printf("数を入れて:");
	scanf("%d", &num);
	i = 0;
	while (i < num) {
		printf("*");
		i++;
	}
}
	//#include <stdio.h>

	//int main() {
	//	int count;
	//	printf("数を入れて");
	//	scanf("%d", &count);
	//
	//	for (int i = 0; i < count; i++) {
	//		printf("*");
	//	}

	//	return 0;
	//}