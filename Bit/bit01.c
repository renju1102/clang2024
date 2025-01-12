#include<stdio.h>

enum BitState
{
	Base =0,		//通常
	Poison=1<<0,	//毒
	sleep=1<<1,		//ねむり
	Paralysis=1<<2,	//麻痺
	Burn=1<<3,		//やけど
	AtkUp=1<<4,		//攻撃アップ
	AtkDown=1<<5	//攻撃ダウン
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
		printf("どの状態を解除しますか\n");
		printf("１毒２睡眠３麻痺４やけど５攻撃↑６攻撃↓７全て解除０終了>");
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
			*s &= Base;//ベース（通常に戻す）
			break;
		default:
			break;
		}
	}
}