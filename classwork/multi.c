// #include<stdio.h>
//     int multi(int, int );
//     int(main);
//     {
//         int a,b,c;
//         printf("Enter a number: ");
//         scanf("%d %d"&a, &b);
//         c = multi(int a, int b);
//         printf("")
//     }
#include <stdio.h>

int multi(int n) {
    int i,n;
    for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d \n", n, i, n * i);
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    multi(n);

    return 0;
}
