#include<stdio.h>
main()
{
	int h,m,s;
	printf("•b”‚ğ‚T‚O‚O‚OˆÈ‰º‚Å“ü—Í:");
	scanf("%d", &s);
	
	if (s <= 5000) {
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
		printf("%d%d•ª%d•b\n",h, m, s);
	}
	else {
		printf("“ü—Í‚µ’¼‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
}