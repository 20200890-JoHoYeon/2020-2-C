#include <stdio.h>

int factorial(int); //�Լ�����

int main(void)
{
	for (int i = 1; i <= 10; i++)
		printf("%2d! = %d\n", i, factorial(i));
	
	return 0;
}


// n! ���ϴ� ����Լ�
int factorial(int number)
{
	if (number <= 1)
		return 1;
	else
		return (number * factorial(number - 1));
}