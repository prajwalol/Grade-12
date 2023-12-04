#include<stdio.h>
    area(float r) {
    return  2 * 22 / 7 * r * r;
}

int main() {
    float r, a;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    if (a = area(r))

        printf("the area of circle is: %.2f\n",a);

    else{ 
            printf("The value cannot be empty or negative");
        }

    return 0;
}