// Function to calculate the sum of natural numbers up to n

#include <stdio.h>
int sumOfNaturalNumbers(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n = 10; // Set n to 10 for the sum of natural numbers from 1 to 10
    int result = sumOfNaturalNumbers(n);
    printf("Sum of natural numbers from 1 to 10 is: %d\n", result);

    return 0;
}
