#include <stdio.h>

int main()
{
	int i = 10, j = 20;
	const int* p = &i; //*p가 상수로 *p로 수정할 수 없음 
	//*p = 20; //오류 발생 
	p = &j;
	printf("%d\n", *p);

	double d = 7.8, e = 2.7;
	double* const pd = &d;
	//pd = &e; //pd가 상수로 다른 주소값을 저장할 수 없음 
	*pd = 4.4;
	printf("%f\n", *pd);

	return 0;
}