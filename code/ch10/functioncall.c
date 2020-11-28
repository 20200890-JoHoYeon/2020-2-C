#include <stdio.h>

int add2(int a, int b);      //int add2 (int, int)도 가능
int findMax2(int, int);    //int findMax2(int a, int b)도 가능
void printMin(int, int);   //int printMin(int a, int b)도 가능

int main(void)
{
	int a = 3, b = 5;

	int max = findMax2(a, b);
	printf("최대: %d\n", max);
	printf("합: %d\n", add2(a, b));

	//반환값이 없는 함수호출은 일반문장처럼 사용 
	printMin(2, 5);

	return 0;
}
//이하 함수 add2, findMax2, findMin2, printMin 구현 
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
	printf("최소: %d\n", min);

	return;   //생략 가능
}