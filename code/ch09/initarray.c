#include <stdio.h>
#define SIZE 6

int main(void)
{
	//�迭 score ����� �ʱ�ȭ 
	double score[] = { 89.3, 79.2, 84.83, 76.8, 92.52, 97.4 };
	double sum = 0;

	//for ���� �̿��Ͽ� ���� ���� 
	for (int i = 0; i < SIZE; i++)
	{
		sum += score[i];
		printf("score[%d] = %.2f\n", i, score[i]);
	}
	printf("������ ���� %.2f�̰� ����� %.2f�̴�. \n", sum, sum / SIZE);

	return 0;
}