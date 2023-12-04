// Ask any five numbers and find the GREATEST one.
#include <stdio.h>

int max(int, int, int, int, int);

int main() {
    int a, b, c, d, e, ans;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    ans = max(a, b, c, d, e);
    printf("\nHighest number is %d", ans);
    return 0;
}

int max(int a, int b, int c, int d, int e) {
    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    if (e > max) {
        max = e;
    }

    return max;
}
