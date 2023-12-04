#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file = fopen("tele.dat", "r");
    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    char search[50];
    printf("Enter a first name or last name to search: ");
    scanf("%s", search);

    int found = 0;
    char firstName[50], lastName[50];
    while (fscanf(file, "%s %s", firstName, lastName) != EOF)
    {
        if (strcmp(search, firstName) == 0 || strcmp(search, lastName) == 0)
        {
            printf("Found a match:\n");
            printf("First Name: %s\n", firstName);
            printf("Last Name: %s\n", lastName);
            found = 1;
        }
    }
    fclose(file);

    if (!found)
    {
        printf("No match found for '%s'.\n", search);
    }

    return 0;
}
