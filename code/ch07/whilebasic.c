#include <stdio.h>

int main(void)
{
    int count = 1;
    
    while (count <= 3)
    {
        printf("C 언어 재미있네요!\n");
        count++;
    }
    printf("\n제어변수 count => %d\n", count);

    return 0;
}