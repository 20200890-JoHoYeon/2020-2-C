#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int input = 0, result = 0, digit = 0;
    int devider = 100;

    printf("���� ����[100~999] �Է� : ");
    scanf("%d", &input);
    result = input;
    do
    {
        digit = result / devider;
        result %= devider;
        printf("%3d���� ���: %d\n", devider, digit);
        devider /= 10;
    } while (devider >= 1);

    return 0;
}