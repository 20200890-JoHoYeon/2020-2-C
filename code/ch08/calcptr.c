#include <stdio.h>

int main(void)
{

	char *pc = (char*)100;//�����ϳ� �� �̿����� ���� 
	int *pi = (int*)100;	//�����ϳ� �� �̿����� ����
	double *pd = (double*)100;//�����ϳ� �� �̿����� ����
	pd = 100;		//���߻�

	printf("%u %u %u\n", (int)(pc - 1), (int)pc, (int)(pc + 1));
	printf("%u %u %u\n", (int)(pi - 1), (int)pi, (int)(pi + 1));
	printf("%u %u %u\n", (int)(pd - 1), (int)pd, (int)(pd + 1));

	return 0;
}