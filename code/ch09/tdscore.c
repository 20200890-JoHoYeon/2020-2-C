#include <stdio.h>

#define ROWSIZE 4
#define COLSIZE 2

int main(void)
{
	int sum = 0, midsum = 0, finalsum = 0;

	// 2���� �迭 �ʱ�ȭ
	int score[][COLSIZE] = { 95, 85, 90, 88, 86, 90, 88, 78 };

	printf("       �߰�      �⸻\n");
	printf("--------------------------\n");
	for (int i = 0; i < ROWSIZE; i++)
	{
		for (int j = 0; j < COLSIZE; j++)
		{
			printf("%10d ", score[i][j]);
			sum += score[i][j];
			if (j == 0) midsum += score[i][j];
			else finalsum += score[i][j];
		}
		puts("");
	}
	printf("--------------------------\n");
	printf("���: %7.2f %7.2f\n", (double)midsum / ROWSIZE,
		(double)finalsum / ROWSIZE);
	printf("\n������ ���� %d�̰� ", sum);
	printf("����� %.2f�̴�.\n", (double)sum / (ROWSIZE * COLSIZE));

	return 0;
}