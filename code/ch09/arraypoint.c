#include <stdio.h>

int main()
{
	int a[3][4] = { 
		{ 1, 2, 7, 3 },		/*  initializers for row indexed by 0 */
		{ 5, 6, 3, 4 },		/*  initializers for row indexed by 1 */
		{ 9, 7, 1, 8 }		/*  initializers for row indexed by 2 */
	};
	
	printf("%6s %6s %3s  ", "����", "�ּ�", "��");
	printf("%6s %6s %3s  ", "����", "�ּ�", "��");
	printf("%6s %6s %3s  ", "����", "�ּ�", "��");
	printf("%6s %6s %3s\n", "����", "�ּ�", "��");
	printf("---------------------------------------");
	printf("---------------------------------------\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("a[%d][%d] %d %d  ", i, j, &a[i][j], a[i][j]);
			//printf("a[%d][%d] %llu %d  ", i, j, (uintptr_t)&a[i][j], a[i][j]); //12 ���� 1���� ����
		puts("");
	}

	return 0;
}