#include <stdio.h>

#define ROWSIZE 2 
#define COLSIZE 3

int main(void)
{
	// 2���� �迭 �ʱ�ȭ
	int td[][3] = { { 1 }, { 1, 2, 3 } };

	printf("�ݺ��� for�� �̿��Ͽ� ���\n");
	for (int i = 0; i < ROWSIZE; i++)
	{
		for (int j = 0; j < COLSIZE; j++)
			printf("%d ", td[i][j]);
		printf("\n");
	}

	return 0;
}