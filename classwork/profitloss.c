// #include<stdio.h>
// int price(int, int);
// int main(){
//     int cp, sp, p;
//     printf("Enter cost price and selling price: ");
//     scanf("%d %d", &cp, &sp);
//     p=price(cp, sp);
//     printf("")
    
// }
#include<stdio.h>
int check(int cp, int sp){
    if(cp<sp)
        return 1;
    else
        return 0;
}
int main() {
    int cp, sp ;
    printf("Enter cost price and selling price: ");
    scanf("%d %d", &cp, &sp);

    int profit = check(cp, sp);

    if (profit)
        printf(" gain bhayo.\n");
    else
        printf(" Loss bhayo.\n");

    return 0;
}