#include <stdio.h>

int main(void)
{
	int data = 100;
	char ch = 'A';
	int *ptrint = &data;
	char *ptrchar = &ch;

	printf("�������� ���: %d %c\n", *ptrint, *ptrchar);

	*ptrint = 100;//���� data�� *ptrint�� ���������Ͽ� �� ������ ����
	*ptrchar = 'B';//���� ch�� *ptrchar�� ���������Ͽ� �� ������ ����
	printf("�������� ���: %d %c\n", data, ch);

	return 0;
}