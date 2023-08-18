#include <stdio.h>

void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return; // Don't print anything if n is out of range
    }

    int i = 0;
    while (i <= 10) {
        printf("%2d x %2d = %2d\n", n, i, n * i);
        i++;
    }
}

int main() {
    int n;
    printf("Enter a number between 0 and 15: ");
    scanf("%d", &n);

    print_times_table(n);

    return 0;
}
