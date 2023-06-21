#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        printf("+");
        return 1;
    } else if (n == 0) {
        printf("0");
        return 0;
    } else {
        printf("-");
        return -1;
    }
}

int main() {
    int number = 42;
    int sign = print_sign(number);
    printf("\nSign: %d\n", sign);

    return 0;
}
