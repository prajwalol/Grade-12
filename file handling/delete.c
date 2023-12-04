#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Record
{
    char firstName[50];
    char lastName[50];
    char address[100];
    char telephone[15];
};

int main()
{
    FILE *file, *tempFile;
    struct Record record;
    char deleteName[50];
    int found = 0;

    file = fopen("tele.dat", "rb");
    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    tempFile = fopen("temp.dat", "wb");
    if (tempFile == NULL)
    {
        printf("Error creating temporary file.\n");
        fclose(file);
        return 1;
    }

    printf("Enter the First Name to delete: ");
    scanf("%s", deleteName);

    while (fread(&record, sizeof(struct Record), 1, file))
    {
        if (strcmp(record.firstName, deleteName) == 0)
        {
            printf("Record deleted successfully:\n");
            printf("First Name: %s\n", record.firstName);
            printf("Last Name: %s\n", record.lastName);
            printf("Address: %s\n", record.address);
            printf("Telephone: %s\n", record.telephone);
            found = 1;
        }
        else
        {
            fwrite(&record, sizeof(struct Record), 1, tempFile);
        }
    }

    if (!found)
    {
        printf("Record not found.\n");
    }

    fclose(file);
    fclose(tempFile);

    if (remove("tele.dat") == 0)
    {
        if (rename("temp.dat", "tele.dat") == 0)
        {
            printf("File updated successfully.\n");
        }
        else
        {
            printf("Error renaming the temporary file.\n");
        }
    }
    else
    {
        printf("Error deleting the original file.\n");
    }

    return 0;
}
