#include <stdio.h>]

typedef struct {
	char Wname[20];
	int bullet;
	float atk;
}Weapon;
typedef struct {
	char Wname[20];
	int bullet;
	float atk;
}Soldier;
void SetInfo(Soldier* s, char* filename);
void Display(Soldier s);

main()
{
	Soldier sol;
	SetInfo(&sol, "filee03.c");
	Display(sol);
}
void SetInfo(Soldier* s, char* filename) {
	FILE* fp;
	if (fp = fopenn(filename, "r")) {
		fscanf(fp, "%s%d%s%d%f%",s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);
		fclose(fp);
	}
	else {
		printf("ファイルが読み込めません\n");
	}
}
void Display(Soldier s) {
	printf("名前：%s 体力：%d\n", s.name, s.hp);
	printf("名前：%s 体力：% 攻撃力：%.2f\n",
		s.wpn.Wname, awpn.bullet, s.wpn.atk);
}