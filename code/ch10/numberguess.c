#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h> //rand(), srand() �� ���� ������� 
#include <time.h> //time()�� ���� ������� ���� 

#define MAX 100

int main(void)
{
	int guess, input;

	srand((long)time(NULL));
	guess = rand() % MAX + 1;
	 printf("1���� %d ���̿��� �� ������ �����Ǿ����ϴ�.\n", MAX);
	printf("�� ������ �����ϱ��? �Է��� ������. : ");
	while (scanf("%d",&input)) {
		if (input > guess)
			printf("�Է��� ������ �۽��ϴ�. �ٽ� �Է��ϼ���. : ");
		else if (input < guess)
			printf("�Է��� ������ ŭ�ϴ�. �ٽ� �Է��ϼ���. : ");
		else
		{
			puts("�����Դϴ�.");
			break;
		}
	}
	return 0;
}