//Create a procedure to ask a number and check whether it is “ARMSTRONG” or not. 

#include <stdio.h>

int isArmstrong(int number) {
    int originalNumber = number;
    int numDigits = 0;
    int sum = 0;

    // Count the number of digits in the input number
    while (number != 0) {
        numDigits++;
        number /= 10;
    }

    // Calculate the sum of the digits raised to the power of the number of digits
    number = originalNumber;
    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == originalNumber);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
