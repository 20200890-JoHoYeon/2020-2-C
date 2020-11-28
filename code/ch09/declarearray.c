#include <stdio.h>

#define SIZE 5

int main(void)
{
	// 배열선언 
	int score[SIZE];//int score[5];

	//배열 원소에 값 저장 
	score[0] = 78;
	score[1] = 97;
	score[2] = 85;
	//배열 4번째 원소에 값 저장하지 않아 쓰레기값 저장 
	score[4] = 91;
	//sscore[5] = 50; //문법오류는 발생하지 않으나 실행오류 발생

	//배열원소 출력
	for (int i = 0; i < SIZE; i++)
		printf("%d ", score[i]);
	printf("\n");

	return 0;
}