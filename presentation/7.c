// Create a set of codes to convert the DECIMAL number to the BINARY equivalent.
#include <stdio.h>

int dectobin(int decimal) {
    int binary = 0, base = 1;

    while (decimal > 0) {
        int r = decimal % 2;
        binary += r * base;
        base *= 10;
        decimal /= 2;
    }

    return binary;
}

int main() {
    int deci;
    printf("Enter a decimal number: ");
    scanf("%d", &deci);

    int binary = dectobin(deci);
    printf("%d = %d\n", deci, binary);

    return 0;
}
