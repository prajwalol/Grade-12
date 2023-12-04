// #include<stdio.h>
// int main(){
//     float a = 0,b,h;
//     printf("Enter the b and h: ");
//     scanf("%f %f", &b, &h);
//     a = b*h/2 ;
//     printf("The are of triangle is %f sq units",a);
// return 0;
// }
#include <stdio.h>

float Area(float, float);

int main() {
    float b, h, a;
    printf("Enter the breadth and height: ");
    scanf("%f %f", &b, &h);
    a = Area(b, h);
    printf("The area of the triangle is %.2f sq units", a);
    return 0;
}

float Area(float b, float h) {
    return b * h / 2;
}