#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name[50];
    int c;
    FILE *file;
    file = fopen("tele.dat", "r");
    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Records in the file:\n");

    while (fscanf(file, "%s %d", name, &c) == 2)
    {
        printf(" Name: %s\n", name);
        printf("Contact: %d\n", c);
        printf("\n");
    }

    fclose(file);

    return 0;
}
