#include <stdio.h>

int facto(int);

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    facto(n);
    return 0;

}
int facto(int n)
{
    int i,f=1;
    for(i = 1; i <= n; i++)
    {
        f = f * i;

    }
    printf("\n Factorial of %d! = %d",n, f);
    return 0;
}
//Ask a number and display its FACTORIAL.


