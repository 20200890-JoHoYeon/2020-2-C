#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{

	int input;
	do {
		printf("\t [1] �ѽ�\n");
		printf("\t [2] ���\n");
		printf("\t [3] �н�\n");
		printf("\t [4] ��Ÿ\n");
		printf("�޴� ��ȣ ���� �� [Enter] : ");
		scanf("%d", &input);
		printf("���� �޴� %d\n", input);
		if (input <= 4 && input >= 1)
			break;
	} while (1);

	return 0;
}