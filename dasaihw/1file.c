#include <stdio.h>
#include <conio.h>

struct Teacher
{
    char name[100];
    char address[100];
    char subject[100];
};

int main()
{
    struct Teacher t;
    char ch = 'y';

    FILE *fp = fopen("data.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    do
    {
        printf("\nEnter teacher's name, address, and subject: ");
        scanf("%s%s%s", t.name, t.address, t.subject);

        fprintf(fp, "\n%s\t%s\t%s", t.name, t.address, t.subject);

        printf("\n\nAdd more records[y/n]: ");
        ch = getche();
    } while (ch != 'n');
    fclose(fp);
    return 0;
}
