#include <stdio.h>

int main(void)
{
	int a[] = { 8, 2, 8, 1, 3 };
	int* p = a;

	printf("%2d, %2d\n", *(p + 1), *(p + 4)); //배열 원소 a[1], a[4] 참조
	printf("%2d, %2d\n", p[1], p[4]);	      //배열 원소 a[1], a[4] 참조
	printf("sizeof(a) = %d, sizeof(p) = %d\n", sizeof(a), sizeof(p));

	printf("%d\n", *++p); //배열의 두 번째 원소 참조
	//printf("%2d\n", *++a); //오류 발생

	int ary[][4] = { 5, 7, 6, 2, 7, 8, 1, 3 }; //2행 4열 배열
	int(*ptr)[4] = ary;		//열이 4인 배열을 가리키는 포인터
	//int *ptr [4] = ary; //포인터 배열

	printf("%2d, %2d\n", **ary, **ptr++); //첫 번째 원소, 5, ptr은 1 증가됨 
	printf("%2d, %2d\n", **(ary + 1), **(ptr++));
		//두 번째 원소, 7, ptr은 1 증가됨
	ptr = ary; //다시 ptr이 배열 ary의 처음을 가리키도록 
	printf("%2d, %2d\n", *(ary[1] + 1), *(ptr[1] + 1)); //2행 2열, 8 
	printf("%2d, %2d\n", *(*(ary + 1) + 3), *(*(ptr + 1) + 3)); //2행 4열, 3 
	printf("sizeof(ary) = %d, sizeof(ptr) = %d\n", sizeof(ary), sizeof(ptr));

	return 0;
}