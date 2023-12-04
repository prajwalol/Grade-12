// Ask a number and check whether it is PRIME or Composite.
#include <stdio.h>

int prime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int num;
    printf("Enter any integer: ");
    scanf("%d", &num);
    if (prime(num)) {
        printf("%d prime ho.\n", num);
    } else {
        printf("%d prime haina.\n", num);
    }

    return 0;
}
