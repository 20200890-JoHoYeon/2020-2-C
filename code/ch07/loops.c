#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int input, sum, i, j;

    do
    {
        printf("���� ���� �Ǵ� 0(����)�� �Է�: ");
        scanf("%d", &input);

        for (i = 1; i <= input; i++)
        {
            for (j = 1, sum = 0; j <= i; j++)
            {
                printf("%d", j);
                j == i ? printf(" = ") : printf(" + ");
                sum += j;
            }
            printf("%d\n", sum);
        }
    } while (input > 0);

    puts("�����մϴ�.");

    return 0;
}