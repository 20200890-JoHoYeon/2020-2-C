#include <stdio.h>

//2���� �迭���� ��� ���ϴ� �Լ�����
double sum(double data[][3], int, int);
//2���� �迭���� ��� ���ϴ� �Լ����� 
void printarray(double data[][3], int, int);
int main(void)
{
	//4 x 3 ����� ���� ������ �迭 ���� �� �ʱ�ȭ
	double x[][3] = { { 1, 2, 3 }, { 7, 8, 9 }, { 4, 5, 6 }, { 10, 11, 12 } };

	int rowsize = sizeof(x) / sizeof(x[0]);
	int colsize = sizeof(x[0]) / sizeof(x[0][0]);
	printf("2���� �迭�� �ڷᰪ�� ������ �����ϴ�.\n");
	printarray(x, rowsize, colsize);
	printf("2���� �迭�� �������� %.3lf �Դϴ�.\n", sum(x, rowsize, colsize));

	return 0;
}

//�迭���� ��� ���ϴ� �Լ� 
double sum(double (*data)[3], int rowsize, int colsize)
//double sum(double data[] [3], int rowsize, int colsize)
{
	double total = 0;

	for (int i = 0; i < rowsize; i++)
		for (int j = 0; j < colsize; j++)
			total += data[i][j];

	return total;
}

// �迭���� ��� ����ϴ� �Լ� 
void printarray(double (*data)[3], int rowsize, int colsize)
//void printarray(double data[][3], int rowsize, int colsize)
{
	for (int i = 0; i < rowsize; i++)
	{
		printf(" %d�� ����: ", i + 1);
		for (int j = 0; j < colsize; j++)
			printf("x[%d][%d] = %5.2lf   ", i, j, data[i][j]);
		printf("\n");
	}
	printf("\n");
}