#include<stdio.h>

enum BitState
{
	Base =0,		//í èÌ
	Poison=1<<0,	//ì≈
	sleep=1<<1,		//ÇÀÇﬁÇË
	Paralysis=1<<2,	//ñÉ·É
	Burn=1<<3,		//Ç‚ÇØÇ«
	AtkUp=1<<4,		//çUåÇÉAÉbÉv
	AtkDown=1<<5	//çUåÇÉ_ÉEÉì
};

typedef unsigned int UINT;

void DisplayStatus(UINT s);

void ChangFlg(UINT* s);

void ClearFlg(UINT* s);
main() {
	UNIT
	
}
void ClearFlg(UINT* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("Ç«ÇÃèÛë‘ÇâèúÇµÇ‹Ç∑Ç©\n");
		printf("ÇPì≈ÇQêáñ∞ÇRñÉ·ÉÇSÇ‚ÇØÇ«ÇTçUåÇÅ™ÇUçUåÇÅ´ÇVëSÇƒâèúÇOèIóπ>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a){
		case 1;
			*s &= ~Poison;
			break;
		case 2;
			*s &= ~Sleep;
			break;
		case 3;
			*s &= ~Paralysis;
			break;
		case 4;
			*s &= ~Burn;
			break;
		case 5;
			*s &= ~AtkUp;
			break;
		case 6;
			*s &= ~AtkDown;
			break;
		case 7;
			*s &= Base;//ÉxÅ[ÉXÅií èÌÇ…ñﬂÇ∑Åj
			break;
		default:
			break;
		}
	}
}