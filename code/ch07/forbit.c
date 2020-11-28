#include <stdio.h>

#define TOTAL_BLT 32

int main(void)
{
	int num = 13;

	printf("정수 %d의 %d비트 내부값:\n",num, TOTAL_BLT);

	for (int i = TOTAL_BLT-1; i>=0; i--)
	{
		printf("%d", num >> i & 1);
	}

	printf("\n");

	return 0;
}