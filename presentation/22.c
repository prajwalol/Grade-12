// Find the s of first 10 natural numbers.
#include <stdio.h>

int sum(int n) {
    int s = 0;

    for (int i = 1; i <= n; i++) {
        s += i;
    }

    return s;
}

int main() {
    int n = 10;
    int result = sum(n);

    printf("Sum of first %d natural numbers is: %d\n", n, result);

    return 0;
}

