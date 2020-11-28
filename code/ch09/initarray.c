#include <stdio.h>
#define SIZE 6

int main(void)
{
	//배열 score 선언과 초기화 
	double score[] = { 89.3, 79.2, 84.83, 76.8, 92.52, 97.4 };
	double sum = 0;

	//for 문을 이용하여 합을 구함 
	for (int i = 0; i < SIZE; i++)
	{
		sum += score[i];
		printf("score[%d] = %.2f\n", i, score[i]);
	}
	printf("성적과 합은 %.2f이고 평균은 %.2f이다. \n", sum, sum / SIZE);

	return 0;
}