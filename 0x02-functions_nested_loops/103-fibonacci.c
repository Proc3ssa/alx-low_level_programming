#include "main.h"
#include <stdio.h>

int main(void)
{
    unsigned long long fib1 = 1, fib2 = 2, nextFib, sum = 2;

    while (1)
    {
        nextFib = fib1 + fib2;

        if (nextFib > 4000000)
            break;

        if (nextFib % 2 == 0)
            sum += nextFib;

        fib1 = fib2;
        fib2 = nextFib;
    }

    printf("%llu\n", sum);

    return 0;
}
