#include <stdio.h>

    area(float r) {
    return 2 * 22 / 7.0 * r * r;
}

int main() {
    float r, a;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    if (r < 0) {
        printf("Error: The radius cannot be negative.\n");
    } else {
        a = area(r);
        printf("The area of the circle is: %.2f\n", a);
    }
    // if (a = area(r))

    //     printf("the area of circle is: %.2f\n",a);

    // else{ 
    //         printf("The value cannot be empty or negative");
    //     }

    return 0;
}


