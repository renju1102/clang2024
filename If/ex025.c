#include <stdio.h>
main()
{
	char ch;
	printf("���������:");
	scanf("%c", &ch);
	if ((ch >= 'A' && ch <= 'Z')|| (ch>='a'&&ch<='z')) {
		printf("�A���t�@�x�b�g�ł�\n");
	}
		else {
		if (ch>='0'&&ch<='9') {
			printf("�����ł�");
			}
		else {
			printf("���̑��̕����ł�\n");
		}
	}
}