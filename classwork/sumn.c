// sum of two numbers
#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);

    int c = sum(a, b);
    printf("The sum is %d", c);

    return 0;
}
