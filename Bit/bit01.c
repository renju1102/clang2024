#include<stdio.h>

enum BitState
{
	Base =0,		//�ʏ�
	Poison=1<<0,	//��
	sleep=1<<1,		//�˂ނ�
	Paralysis=1<<2,	//���
	Burn=1<<3,		//�₯��
	AtkUp=1<<4,		//�U���A�b�v
	AtkDown=1<<5	//�U���_�E��
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
		printf("�ǂ̏�Ԃ��������܂���\n");
		printf("�P�łQ�����R��ჂS�₯�ǂT�U�����U�U�����V�S�ĉ����O�I��>");
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
			*s &= Base;//�x�[�X�i�ʏ�ɖ߂��j
			break;
		default:
			break;
		}
	}
}