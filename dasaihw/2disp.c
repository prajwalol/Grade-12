#include <stdio.h>

struct Teacher
{
    char name[100];
    char address[100];
    char subject[100];
};
int main()
{
    struct Teacher t;
    FILE *fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Teacher's Information\n");
    printf("====================\n");

    while (fscanf(fp, "%s%s%s", t.name, t.address, t.subject) != EOF)
    {
        printf("Name: %s Address: %s Subject: %s\n", t.name, t.address, t.subject);
    }

    fclose(fp);

    return 0;
}
