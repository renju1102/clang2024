#include<stdio.h>
main()
{
	int h,m,s;
	printf("�b�����T�O�O�O�ȉ��œ���:");
	scanf("%d", &s);
	
	if (s <= 5000) {
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
		printf("%d��%d��%d�b\n",h, m, s);
	}
	else {
		printf("���͂������Ă�������\n");
	}
}