#include <stdio.h>

//int add2(int a, int b);	//�� ��ġ�� ����

int main(void)
{
	int a = 3, b = 5;
	int add2(int a, int b);		//int add2 (int, int)

	//�� �Լ������� ������ �Լ�ȣ�⿡�� �����߻�
	int sum = add2(a, b);
	printf("��: %d\n", sum);

	return 0;
}

//�Լ� add2�� �Լ����� �Ǵ� �Լ����� �κ�
int add2(int a, int b)
{
	int sum = a + b;

	return (sum); //��ȣ�� ���� ����
}
//�� main() �Լ����� ȣ���� �����Ƿ� �� �Լ������� ������� ����
int findMin2(int x, int y)
{
	int min = x < y ? x : y;
	
	return (min);
}