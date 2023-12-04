#include <stdio.h>

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main() {
    int n, result ;
    printf("Wnter any number: ");
    scanf("%d",&n);
    result = fact(n);
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}
//fact using recursion