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
		printf("�t�@�C�����ǂݍ��߂܂���\n");
	}
}
void Display(Soldier s) {
	printf("���O�F%s �̗́F%d\n", s.name, s.hp);
	printf("���O�F%s �̗́F% �U���́F%.2f\n",
		s.wpn.Wname, awpn.bullet, s.wpn.atk);
}