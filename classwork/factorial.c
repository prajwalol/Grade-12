// #include <stdio.h>

// int facto(int);

// int main()
// {
//     int n;
//     printf("Enter a number :");
//     scanf("%d", &n);
//     facto(n);
//     return 0;
// }
// int facto(int n)
// {
//     int i, f = 1;
//     for (i = 1; i <= n; i++)
//     {
//         f = f * i;
//     }
//     printf("\n Factorial is %d", f);
//     return 0;
// }

#include <stdio.h>
void facto(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    facto(n);
    return 0;
}

void facto(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("\nFactorial is %d\n", f);
}
