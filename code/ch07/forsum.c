#include <stdio.h>

int main(void)
{
	int i, sum;

	for (i = 1, sum = 0; i <= 10; i++) //++i�� ����
		sum += i; // sum = sum + i;
	printf("1���� 10������ ��: %3d\n", sum);
	
	for (i = 1, sum = 0; i <= 10; )
		sum += i++;
	printf("1���� 10������ ��: %3d\n", sum);

	for (i = 0, sum = 0; i <= 9; )
		sum += ++i;
	printf("1���� 10������ ��: %3d\n", sum);

	for (i = 1, sum = 0; i <= 10; sum += i++);//�ݺ���ü�� ���� for ��
	printf("1���� 10������ ��: %3d\n", sum);


	printf("\n");

	return 0;
}