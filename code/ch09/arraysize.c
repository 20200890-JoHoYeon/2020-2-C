#include <stdio.h>

int main(void)
{
	int data[] = { 3, 4, 5, 7, 9 };

	printf("%d %d\n", sizeof(data), sizeof(data[0]));
	printf("������ �迭: �迭 ũ�� == %d\n", sizeof(data) / sizeof(data[0]));
	
	//4 x 3 ��� 
	double x[][3] = { { 1, 2, 3 }, { 7, 8, 9 }, { 4, 5, 6 }, { 10, 11, 12 } };

	printf("%d %d %d\n", sizeof(x), sizeof(x[0]), sizeof(x[1]),
		sizeof(x[0][0]));
	int rowsize = sizeof(x) / sizeof(x[0]);
	int colsize = sizeof(x[0]) / sizeof(x[0][0]);
	printf("������ �迭: ��� == %d  ���� == %d\n", rowsize, colsize);
	printf("������ �迭: ��ü ���� �� == %d\n", sizeof(x) / sizeof(x[0][0]));

	return 0;
}