#include <stdio.h>

int main(void) 
{
	const int MAX = 15;
	
	printf("1���� %d���� ���� �߿��� 3���� ������ �������� �ʴ� ��\n", MAX);
	for (int i = 1; i <= MAX; i++)
	{
		if (i % 3 == 0) // (!(i % 3))
			continue;
		printf("%3d", i);
	}
	puts("");
	
	return 0;
}