#include<stdio.h>
void days(int);
int main(){
    int a;
    printf("Enter a number (1-7): ");
    scanf("%d", &a);
    days(a);
    return 0;
}
void days(int b)
{
    switch(b)
    { 
        case 1:
        printf("\n Sunday ");
        break;

        case 2:
        printf("\n Monday ");
        break;

        case 3:
        printf("\n Tuesday ");
        break;

        case 4:
        printf("\n Wednesday ");
        break;

        case 5:
        printf("\n Thursday ");
        break;

        case 6:
        printf("\n Friday ");
        break;

        case 7:
        printf("\n Saturday ");
        break;

        default:
        printf("wrong bhayo \n");
            
    }

}