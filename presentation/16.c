// Ask any five numbers and find the SMALLEST one
#include <stdio.h>

int small(int, int, int);

int main() {
    int a, b, c, ans;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    ans = small(a, b, c);
    printf("\nsmallest number is %d", ans);
    return 0;
}

int small(int a, int b, int c) {
    int check;
    if (a < b && a < c)
        check = a;
    else if (b < c)
        check = b;
    else
        check = c;
    return check;
}