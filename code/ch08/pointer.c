#include <stdio.h>

int main(void)
{
	int data = 100;
	int* ptrint;
	ptrint = &data;
	printf("������   �ּҰ�   ���尪\n");
	printf("----------------------------\n");
	printf("  data  %p  %8d\n", &data, data);
	printf("ptrint  %p  %p\n", &ptrint, ptrint);
	return 0;
}