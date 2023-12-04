#include <stdio.h>
#include <string.h>

int main()
{
    char name[10], pub[15];
    long int p;
    FILE *fp;

    fp = fopen("book.dat", "r");

    if (fp == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    int found = 0;

    while (fscanf(fp, "%s %s %ld", name, pub, &p) != EOF)
    {
        if (strcmp(name, "computer") == 0)
        {
            printf("Book found:\n");
            printf("Name: %s\n", name);
            printf("Publisher: %s\n", pub);
            printf("Price: %ld\n", p);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No book found with the name 'computer'.\n");
    }

    fclose(fp);

    return 0;
}
