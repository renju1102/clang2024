#include<stdio.h>
main()
{
	int h,m,s;
	printf("秒数を５０００以下で入力:");
	scanf("%d", &s);
	
	if (s <= 5000) {
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
		printf("%d時%d分%d秒\n",h, m, s);
	}
	else {
		printf("入力し直してください\n");
	}
}