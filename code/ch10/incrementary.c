#include <stdio.h>

//�Լ� incrementary�� �Լ�����
void incrementary(int ary[], int n, int SIZE);
//�Լ� printary�� �Լ����� 
void printary(int* data, int SIZE);

int main(void)
{
	int data[] = { 4, 7, 2, 3, 5 };
	int aryLength = sizeof(data) / sizeof(int);

	//�迭 ����� ���� printary() �Լ�ȣ�� 
	printary(data, aryLength);
	//�迭 ���Ҹ� ��� 3�� ������Ű�� ���� incrementary() �Լ�ȣ�� 
	incrementary (data, 3, aryLength); 
	printf("�迭 ���ҿ� ���� 3�� ���� ���: \n");
	//����� �˾� ���� printary() �Լ�ȣ�� 
	printary(data, aryLength);

	return 0;
}

//�迭ũ�Ⱑ SIZE�� �迭 ary�� ��� ���Ҹ� n��ŭ ������Ű�� �Լ� 
void incrementary(int ary[], int n, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		*(ary + i) += n;	//ary[i] += n;
}
//�迭ũ�Ⱑ SIZE�� �迭 ary�� ��� ���Ҹ� ����ϴ� �Լ� 
void printary(int* data, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		printf("%2d ", data[i]);
	printf("\n");
}