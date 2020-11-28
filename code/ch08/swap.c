#include <stdio.h>

int main(void)
{
	int m = 100, n = 200, dummy;
	printf("%d %d\n", m, n);

	//변수 m과 n을 사용하지 않고 두 변수를 서로 교환
	int *p = &m;	//포인터 p가 m을 가리키도록
	dummy = *p;		//변수 dummy에 m을 저장
	*p = n;				//변수 m에 n을 저장
	p = &n;			//포인터 p가 n을 가리키도록
	*p = dummy;		//변수 n 에 dummy 값 저장

	printf("%d %d\n", m, n);

	return 0;
}