#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	// �ʱ�ȭ�� ��� ���ҿ� 0�� ����
	int input[20] = { 0 };

	printf("�迭�� ������ ������ ���� �� �Է��Ͻÿ�.");
	printf(" 0�� �Է��ϸ� �Է��� �����մϴ�. \n");
	int i = 0;
	do {
		scanf("%d", &input[i]);
	} while (input[i++] != 0);

	i = 0;
	while (input[i] != 0) {
		printf("%d ", input[i++]);
	}
	puts("");

	return 0;
}