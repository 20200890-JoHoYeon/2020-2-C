#include <stdio.h>

int main(void)
{
	int i = 20;
	int* pi = &i;		//포인터 선언
	int** dpi = &pi;	//이중 포인터 선언

	printf("%p %p %p\n", &i, pi, *dpi);

	*pi = i + 2;	 // j = i + 2;
	printf("%d %d %d\n", i, *pi, **dpi);

	**dpi = *pi + 2; // j = i + 2;
	printf("%d %d %d\n", i, *pi, **dpi);

	return 0;
}