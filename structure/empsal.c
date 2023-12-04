#include <stdio.h>
#include <string.h>
struct Employee
{
    char name[50];
    int id;
    float salary;
};
int main()
{
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployees with a salary less than 50000:\n");
    for (i = 0; i < n; i++)
    {
        if (employees[i].salary < 50000)
        {
            printf("Name: %s\n", employees[i].name);
            printf("Employee ID: %d\n", employees[i].id);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("\n");
        }
    }
    return 0;
}
