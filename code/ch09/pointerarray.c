#define _CRT_SECURE_NO_WARNINGS //sacnf() 오류를 방지하기 위한 상수 정의
#include <stdio.h>


#define SIZE 3

int main(void)
{
	//포인트 배열 변수선언
	int* pary[SIZE] = { NULL };
	int a = 10, b = 20, c = 30;

	pary[0] = &a;
	pary[1] = &b;
	pary[2] = &c;
	for (int i = 0; i < SIZE; i++)
		printf("*pary[%d] = %d\n", i, *pary[i]);

	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", pary[i]);
		printf("%d, %d, %d\n", a, b, c);
	}

	return 0;
}