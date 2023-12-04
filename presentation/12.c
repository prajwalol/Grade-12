//Ask a number and check whether it is Odd or Even.
#include <stdio.h>

int check(int num) {
    if (num % 2 == 0)
        return 1; 
    else
        return 0; 
}

int main() {
    int num ;
    printf("Enter a number: ");
    scanf("%d", &num);

    int even = check(num);

    if (even)
        printf("%d is an even number.\n", num);
    else
        printf("%d is an odd number.\n", num);

    return 0;
}
