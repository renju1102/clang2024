#include <stdio.h>

main()
{
	int data[] = { 10,20,30,40,50,60,70,80,-999 };
	int* pd;
	int i;

	pd= data;

	printf("�|�C���^���Œ�ŕ\��\n�z��data[]=");
	for (i = 0; *(pd + 1)!= -999; i++) { //-999�ɓ��B����܂ŗׂ̂a�n�w�����ɍs�����Ƃł��ׂĂ𐔂��邱�Ƃ��ł���
		printf("%d", *(pd + i));
	}
	printf("\n�|�C���^��ω������ĕ\��\n�z��data[]=");
	for (pd=data; *(pd) != -999; pd++) {
		printf("%d", *pd);
	}

}