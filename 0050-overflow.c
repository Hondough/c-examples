#include <stdio.h>

int main(void)
{
    short positive = 32767, negative = -32768;
    short error_A = positive + 1;
    short error_B = negative - 1;

    printf("%d + 1 is %d\n", positive, error_A);
    printf("%d - 1 is %d\n", negative, error_B);
}