#include <stdio.h>

#define TOTAL_BLT 32

int main(void)
{
	int num = 13;

	printf("���� %d�� %d��Ʈ ���ΰ�:\n",num, TOTAL_BLT);

	for (int i = TOTAL_BLT-1; i>=0; i--)
	{
		printf("%d", num >> i & 1);
	}

	printf("\n");

	return 0;
}