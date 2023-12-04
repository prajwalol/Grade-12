/*26.	Using structure, write a program to ask and store the information with the fields
as NAME, POST, dep and SALARY also display all the records whose SALARY is above Rs.45,000/- .*/

#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[50];
    char post[30];
    char dep[50];
    double salary;
};

int main()
{
    struct Employee d[100];
    int n, i;

    printf("Enter the number of employee: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for employee %d:\n", n);

        printf("Name: ");
        scanf(" %s", d[i].name);

        printf("Post: ");
        scanf(" %s", d[i].post);

        printf("dep: ");
        scanf(" %s", d[i].dep);

        printf("Salary: ");
        scanf("%lf", &d[i].salary);
    }

    printf("\nRecords with salary above Rs. 45,000:\n");
    printf("NAME\tPOST\tdep\tSALARY\n");
    printf("====================================\n");
    for (i = 0; i < n; i++)
    {
        if (d[i].salary > 45000)
        {
            printf("%s\t%s\t%s\t%.2lf\n", d[i].name, d[i].post, d[i].dep, d[i].salary);
        }
    }

    return 0;
}

// #include <stdio.h>
// #include <string.h>

// struct Employee {
//     char name[50];
//     char post[30];
//     char dep[50];
//     double salary;
// };

// int main() {
//     struct Employee d[100];
//     int numd, i;

//     printf("Enter the number of d: ");
//     scanf("%d", &numd);

//     // Input employee information
//     for (i = 0; i < numd; i++) {
//         printf("\nEnter details for employee %d:\n", i + 1);

//         printf("Name: ");
//         scanf(" %[^\n]", d[i].name);

//         printf("Post: ");
//         scanf(" %[^\n]", d[i].post);

//         printf("dep: ");
//         scanf(" %[^\n]", d[i].dep);

//         printf("Salary: ");
//         scanf("%lf", &d[i].salary);
//     }

//     // Display records with salary above Rs. 45,000
//     printf("\nRecords with salary above Rs. 45,000:\n");
//     printf("NAME\tPOST\tdep\tSALARY\n");
//     printf("====================================\n");
//     for (i = 0; i < numd; i++) {
//         if (d[i].salary > 45000) {
//             printf("%s\t%s\t%s\t%.2lf\n", d[i].name, d[i].post, d[i].dep, d[i].salary);
//         }
//     }

//     return 0;
// }
