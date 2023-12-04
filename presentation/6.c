// Ask a number and check whether it is divisible by 5 or not.
#include<stdio.h>
int div(int a){ 
 if(a % 5 == 0)
    return 1;
else
    return 0;
}
int main(){
    int n,a;
    printf("enter a number:");
    scanf("%d",&n);

    int divv = div(a);
    
    if(divv)
        printf("divisible");
    else
        printf("not divisible");
}
// int main(){
//     int n, i=5, d=0;
//     printf("Enter a number :");
//     scanf("%d",&n);

// {
    
//    if(n % i == d)

//         printf("The number is divisible by 5");

//     else

//         printf("not divisible");
// }
 
//     return 0;
// }
    