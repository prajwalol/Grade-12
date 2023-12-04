#include <stdio.h>

int main()
{
    char name[15], post[15], dep[15];
    int sal;
    FILE *fp;

    fp = fopen("emp.txt", "w");

    if (!fp)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter employee details:\n");
    printf("Name: ");
    scanf("%s", name);

    printf("Post: ");
    scanf("%s", post);

    printf("Department: ");
    scanf("%s", dep);

    printf("Salary: ");

    scanf("%d", &sal);

    fprintf(fp, "%s %s %s %d\n", name, post, dep, sal);

    fclose(fp);
    return 0;
}

// display
#include <stdio.h>
#include <string.h>
int main()
{
    char name[15], post[15], dep[15];
    int sal;
    FILE *fp;
    fp = fopen("emp.txt", "r");
    if (!fp)
    {
        printf("Error opening the file.\n");
        return 1;
    }
    while (fscanf(fp, "%s%s%s%d", name, post, dep, &sal) != EOF)

    {
        if (sal > 30000)
            printf("Name of employees with salary of 30000");
        printf("\n%s%s%s%d", name, post, dep, sal);
    }
    fclose(fp);
    return 0;
}