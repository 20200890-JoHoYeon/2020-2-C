#include <stdio.h>

int main(void)
{
	int i;
	int *pi = &i;		//������ ����
	int **dpi = &pi;	//���� ������ ����
	
	*pi = 5;
	*pi += 1;			//*pi = *pi + 1�� ���� 
	printf("%d\n", i);

	//���� ������ pi++�� ���� �����ں��� *pi���� ���� 
	printf("%d\n", (*pi)++); //*pi++ �� *(pi++)�� (*pi)++�� �ٸ� 
	printf("%d\n", *pi);

	*pi = 10;
	printf("%d\n", ++ * pi); //++*pi�� ++ (*pi)�� ���� 
	printf("%d\n", ++ * *dpi); //++**dpi�� ++(**dpi)�� ���� 
	printf("%d\n", i);

	return 0;
}