#include <stdio.h>

float increaseSalary(float currentSalary, float increament) {
    float increaseAmount = currentSalary * (increament / 100);
    float newSalary = currentSalary + increaseAmount;
    return newSalary;
}

int main() {
    float currentSalary, increament;
    printf("Enter the current salary: ");
    scanf("%f", &currentSalary);

    printf("Enter the percentage increase: ");
    scanf("%f", &increament);

    if (increament < 0) {
        printf("There was no increament in your salary.\n");
    } else {
        float newSalary = increaseSalary(currentSalary, increament);
        printf("The new salary after %f increase is: %.2f\n", increament, newSalary);
    }
    // if(increament > 0) { 
    //     float newSalary = increaseSalary(currentSalary, increament);
    //     printf("The new salary after increase is: %f\n",newSalary);
    // }
    return 0;
}
