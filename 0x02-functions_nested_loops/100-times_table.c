#include <stdio.h>

void print_times_table(int n) {
    int i;

    if (n < 0 || n > 15) {
        return; 
    }

    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int n;
    printf("Enter a number between 0 and 15: ");
    scanf("%d", &n);

    print_times_table(n);

    return 0;
}
