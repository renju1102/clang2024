#include <stdio.h>

main()
{
	int data[] = { 10,20,30,40,50,60,70,80,-999 };
	int* pd;
	int i;

	pd= data;

	printf("ポインタを固定で表示\n配列data[]=");
	for (i = 0; *(pd + 1)!= -999; i++) { //-999に到達するまで隣のＢＯＸを見に行くことですべてを数えることができる
		printf("%d", *(pd + i));
	}
	printf("\nポインタを変化させて表示\n配列data[]=");
	for (pd=data; *(pd) != -999; pd++) {
		printf("%d", *pd);
	}

}