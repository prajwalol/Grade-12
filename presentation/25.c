#include <stdio.h>

// Define the structure for Employee
struct Employee {
    char name[50];
    char post[50];
    char department[50];
    double salary;
};

int main() {
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    // Create an array of Employee structures to store information
    struct Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        printf("\nEmployee %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", employees[i].name);

        printf("Enter post: ");
        scanf(" %[^\n]", employees[i].post);

        printf("Enter department: ");
        scanf(" %[^\n]", employees[i].department);

        printf("Enter salary: ");
        scanf("%lf", &employees[i].salary);
    }

    printf("\nEmployee Records:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Post: %s\n", employees[i].post);
        printf("Department: %s\n", employees[i].department); 
        printf("Salary: %.2lf\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}
 