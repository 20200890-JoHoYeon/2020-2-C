#include <stdio.h>

int add2(int a, int b);      //int add2 (int, int)�� ����
int findMax2(int, int);    //int findMax2(int a, int b)�� ����
void printMin(int, int);   //int printMin(int a, int b)�� ����

int main(void)
{
	int a = 3, b = 5;

	int max = findMax2(a, b);
	printf("�ִ�: %d\n", max);
	printf("��: %d\n", add2(a, b));

	//��ȯ���� ���� �Լ�ȣ���� �Ϲݹ���ó�� ��� 
	printMin(2, 5);

	return 0;
}
//���� �Լ� add2, findMax2, findMin2, printMin ���� 
int add2(int a, int b)
{
	int sum = a + b;

	return (sum);
}

int findMax2(int a, int b)
{
	int max = a > b ? a : b;

	return max;
}

int findMin2(int x, int y)
{
	int min = x < y ? x : y;

	return (min);
}

void printMin(int a, int b)
{
	int min = a < b ? a : b;
	printf("�ּ�: %d\n", min);

	return;   //���� ����
}