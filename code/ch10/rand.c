#include <stdio.h>

#include <stdlib.h> //rand()���� ������� ����

int main(void)
{
	printf("0 ~ %5d ������ ���� 5��: rand() \n", RAND_MAX);
	for (int i = 0; i < 5; i++)
		printf("%5d ", rand());
	puts("");

	return 0;
}