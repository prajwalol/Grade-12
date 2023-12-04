// Ask for a number and display factors of it.
#include <stdio.h>

void facto(int n) {
    printf("Factors of %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;

    // Ask the user for a n
    printf("Enter a n: ");
    scanf("%d", &n);

    facto(n);

    return 0;
}

