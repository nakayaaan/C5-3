#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

typedef char String[1024];

int main(void)
{
	String input;
	printf("1�`9�̐�����͂��Ă�������\n");
	scanf("%s", input);
	int position = atoi(input);
	switch (position) {
		case 1: case 2:
			printf("�o�b�e���[\n");
			break;
		case3: case 4: case 5: case 6:
			printf("�����\n");
			break;
		case 7: case 8: case 9:
			printf("�O���\n");
			break;
		default:
			printf("���͂��ꂽ����ʒu�͂���܂���\n");
	}
	return 0;
}