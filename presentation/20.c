//Create a set of codes to check whether the input number is Perfect SQAURE or not.
#include <stdio.h>

int isPerfectSquare(int number) {
    int sqrtNumber = 0;

    while (sqrtNumber * sqrtNumber <= number) {
        if (sqrtNumber * sqrtNumber == number) {
            return 1; // It is a perfect square
        }
        sqrtNumber++;
    }

    return 0; // It is not a perfect square
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfectSquare(num)) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}

