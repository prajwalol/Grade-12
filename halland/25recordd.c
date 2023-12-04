#include <stdio.h>
#include <string.h>

struct employee
{
    char name[25];
    char gender[25];
    char post[25];
    char doj[25];
};

int main()
{
    struct employee s[150];
    int i, n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the name of the employee: ");
        scanf("%s", s[i].name);

        printf("Enter the employee's gender: ");
        scanf("%s", s[i].gender);

        printf("Enter the post of the employee: ");
        scanf("%s", s[i].post);

        printf("Enter when the employee joined: ");
        scanf("%s", s[i].doj);
    }

    printf("\nDisplay of records:\n");
    printf("NAME\tGENDER\tPOST\tDATEJOINED\n");
    printf("===============================\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t%s\t%s\t%s\n", s[i].name, s[i].gender, s[i].post, s[i].doj);
    }

    return 0;
}
