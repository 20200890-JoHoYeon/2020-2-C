#include <stdio.h>

//int sumaryf(int ary[], int SIZE); 
int sumary(int *ary, int SIZE);

int main(void)
{
	int point[] = { 95, 88, 76, 54, 85, 33, 65, 78, 99, 82 };
	int *address = point;
	int aryLength = sizeof(point) / sizeof(int);

	int sum = 0;
	for (int i = 0; i < aryLength; i++)
		sum += *(point + i);
		//sum += *(point++);	//오류발생 
		//sum += *(address++);		//가능

	printf("메인에서 구한 합은 %d\n", sum);
	address = point;
	printf("함수 sumary() 호출로 구한 합은 %d\n", sumary(point, aryLength));
	printf("함수 sumary() 호출로 구한 합은 %d\n", sumary(&point[0], aryLength));
	printf("함수 sumary() 호출로 구한 합은 %d\n", sumary(address, aryLength));

	return 0;
}

//int sumary(int ary[], int SIZE)도 가능
int sumary(int* ary, int SIZE)
{
	int sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		//sum += ary[i];	//가능 
		//sum += *(ary + i);	//가능 
		sum += *ary++;
		//sum += *(ary++);		//가능
	}

	return sum;
}