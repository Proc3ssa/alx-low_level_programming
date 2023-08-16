#include "main.h"
#include <stdio.h>

int main(void)
{
    int n = 50;
    unsigned long long fb1 = 1, fb2 = 2, nextfb;

    printf("%llu, %llu", fb1, fb2);

    for (int i = 2; i < n; i++)
    {
        nextfb = fb1 + fb2;
        printf(", %llu", nextfb);

        fb1 = fb2;
        fb2 = nextfb;
    }

    printf("\n");

    return 0;
}
