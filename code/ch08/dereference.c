#include <stdio.h>

int main(void)
{
	int data = 100;
	char ch = 'A';
	int *ptrint = &data;
	char *ptrchar = &ch;

	printf("간접참조 출력: %d %c\n", *ptrint, *ptrchar);

	*ptrint = 100;//변수 data를 *ptrint로 간접참조하여 그 내용을 수정
	*ptrchar = 'B';//변수 ch를 *ptrchar로 갑접참조하여 그 내용을 수정
	printf("직접참조 출력: %d %c\n", data, ch);

	return 0;
}