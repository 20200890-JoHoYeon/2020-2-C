#include <stdio.h> 
#define SIZE 3

int main(void)
{
	int score[] = { 89, 98, 76 };

	// 배열이름 score는 첫 번째 원소의 주소
	printf("score: %p, &score[0]: %p\n", score, &score[0]);

	// 배열이름 score는 첫 번째 값 
	printf("*score: %d, score[0]: %d\n\n", *score, score[0]);

	printf("첨자   주소     저장값\n");
	// 배열이름 score를 사용한 주소와 원소값 참조 
	for (int i = 0; i < SIZE; i++)
		printf("%2d %10p %6d\n", i, (score + i), *(score + i));

	return 0;
}