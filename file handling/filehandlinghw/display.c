#include <stdio.h>
#include <string.h>

int main()
{
    char name[15], title[15], edt[15];
    int price, count = 0;
    FILE *fp, *tempFile;

    fp = fopen("book.txt", "r");
    tempFile = fopen("temp.txt", "w");

    if (fp == NULL || tempFile == NULL)
    {
        printf("Error opening the file(s).\n");
        return 1;
    }

    char nameToDelete[] = "richdadpoordad";

    while (fscanf(fp, "%s %s %s %d", name, title, edt, &price) != EOF)
    {
        if (strcmpi(name, nameToDelete) == 0)
        {
            count++;
            continue;
        }
        fprintf(tempFile, "%s %s %s %d\n", name, title, edt, price);
    }

    fclose(fp);
    fclose(tempFile);

    if (remove("book.txt") == 0 && rename("temp.txt", "book.txt") == 0)
    {
        printf("Deleted %d record(s) with name '%s'.\n", count, nameToDelete);
    }
    else
    {
        perror("File operation failed");
        return 1;
    }

    return 0;
}
