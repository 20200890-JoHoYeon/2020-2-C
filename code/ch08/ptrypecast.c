#include <stdio.h>

int main(void)
{
	int value = 0x61626364;
	int *pi = &value;
	char* pc = (char *) &value;

	printf("������  ���尪   �ּҰ� \n");
	printf("-------------------------\n");
	printf(" value   %0#x  %u\n", value, pi); //���� ���

	//���� �����ͷ� ���� ��� ��� 
	for (int i = 0; i <= 3; i++)
	{
		char ch = *(pc + i);
		printf("*(pc+%d)  %0#6x  %2c  %u\n", i, ch, ch, pc + i);
	}

	return 0;
}