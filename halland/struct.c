#include <stdio.h>

int main()
{
    struct details
    {
        char name[15];
        char address[15];
        int roll_no;
    } d[50];

    int i, n;
    printf("enter number of students:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\n Enter name of the student: ");
        scanf("%s", d[i].name);

        printf("\n Enter address: ");
        scanf("%s", d[i].address);

        printf("\n Enter student's rollno: ");
        scanf("%d", &d[i].roll_no);
    }

    printf("Display of records: ");
    for (i = 1; i <= n; i++)
    {
        printf("\n%s %s %d", d[i].name, d[i].address, d[i].roll_no);
    }

    return 0;
}
