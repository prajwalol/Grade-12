// Create a set of codes to convert DECIMAL number to OCTAL equivalent.
#include <stdio.h>

int dectooct(int decimal) {
    int octal = 0, r,  base = 1;

    while (decimal > 0) {
        r = decimal % 8;
        octal += r * base;
        base *= 10;
        decimal = decimal / 8;
    }

    return octal;
}

int main() {
    int o;
    printf("Enter a decimal number: ");
    scanf("%d", &o);

    int octalEquivalent = dectooct(o);
    printf("%d = %d\n", o, octalEquivalent);

    return 0;
}
