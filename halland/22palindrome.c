// 22.	Create a FUNCTION procedure to ask a number and check whether it is “PALINDROME” or not. (passing arguments and value returning)
#include <stdio.h>

int rev(int n)
{
    int p = 0;
    while (n != 0)
    {
        int d = n % 10;
        p = p * 10 + d;
        n /= 10;
    }
    return p;
}

int palindrome(int n)
{
    int p = rev(n);
    return n == p;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (palindrome(n))
    {
        printf("%d is a palindrome number.\n", n);
    }
    else
    {
        printf("%d is not a palindrome number.\n", n);
    }

    return 0;
}
