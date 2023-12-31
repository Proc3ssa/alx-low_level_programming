#include "main.h"
#include <stdio.h>

void print_fibonacci(int n)
{
    int a = 1, b = 2, next;

    printf("%d, %d", a, b);

    for (int i = 2; i < n; i++)
    {
        next = a + b;
        printf(", %d", next);

        a = b;
        b = next;
    }

    printf("\n");
}

int main(void)
{
    print_fibonacci(98);

    return 0;
}
