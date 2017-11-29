#include <stdio.h>
/*
compiler warns on issue with wrong (not long) format in second printf
*/
int main(void)
{
    long int one_million = 1000000L;

    printf("One million is %ld\n", one_million);
    printf("One million is %d\n", one_million);
}