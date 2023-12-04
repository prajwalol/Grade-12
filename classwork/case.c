#include<stdio.h>
int main(){
    int a, b, sum, difference, product, ch;
    printf("Enter any two numbers: ");
    scanf("%d%d", &a , &b);
    printf("Sum, Difference, Product (1, 2, 3): ");
    scanf("%d", &ch);
    switch (ch)
    {
        case 1:
            sum = a + b ;
            printf("Sum = %d", sum);
            break;
        case 2:
            difference = a - b ;
            printf("Difference = %d", difference);
            break;
        case 3:
            product = a * b ;
            printf("Product = %d", product);
            break;
        default:
            printf("\nInvalid choice!");
    }
    return 0;
}
//check
