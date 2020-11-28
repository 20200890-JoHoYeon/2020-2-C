#include <stdio.h>

//함수 incrementary의 함수원형
void incrementary(int ary[], int n, int SIZE);
//함수 printary의 함수원형 
void printary(int* data, int SIZE);

int main(void)
{
	int data[] = { 4, 7, 2, 3, 5 };
	int aryLength = sizeof(data) / sizeof(int);

	//배열 출력을 위해 printary() 함수호출 
	printary(data, aryLength);
	//배열 원소를 모두 3씩 증가시키기 위해 incrementary() 함수호출 
	incrementary (data, 3, aryLength); 
	printf("배열 원소에 각각 3을 더한 결과: \n");
	//결과를 알아 보기 printary() 함수호출 
	printary(data, aryLength);

	return 0;
}

//배열크기가 SIZE인 배열 ary의 모든 원소를 n만큼 증가시키는 함수 
void incrementary(int ary[], int n, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		*(ary + i) += n;	//ary[i] += n;
}
//배열크기가 SIZE인 배열 ary의 모든 원소를 출력하는 함수 
void printary(int* data, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		printf("%2d ", data[i]);
	printf("\n");
}