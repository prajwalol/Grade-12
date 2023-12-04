//Create a set of codes to convert BINARY number to DECIMAL equivalent.
#include <stdio.h>

int bintodec(int binary) {
    int decimal = 0, r, p = 0, base = 1;

    while (binary > 0) {
        r = binary % 10;
        decimal += r * base;
        base *= 2;
        binary = binary / 10;
    }

    return decimal;
}

int main() {
    int b;
    printf("Enter a binary number: ");
    scanf("%d", &b);

    int deci = bintodec(b);
    printf("%d = %d\n", b, deci);

    return 0;
}
