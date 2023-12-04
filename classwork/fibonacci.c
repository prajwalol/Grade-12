// #include<stdio.h>
// int fib(int);
// int main(){
//     int n, i = 0 , c;
//     scanf("%d",&n);
//     printf("fib series\n");

// }
#include <stdio.h>

int fib(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    printf("Enter the number of terms in the fib series: ");
    scanf("%d", &n);

    printf("fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}
