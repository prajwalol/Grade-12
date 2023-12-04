#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file, *tempFile;
    int recordNumberToDelete, currentRecord = 1;
    char buffer[1000];

    file = fopen("data.txt", "r");
    tempFile = fopen("temp.txt", "w");

    if (!file || !tempFile)
    {
        perror("Error opening files");
        return 1;
    }

    printf("Enter the record number to delete: ");
    scanf("%d", &recordNumberToDelete);

    while (fgets(buffer, sizeof(buffer), file))
    {
        if (currentRecord++ != recordNumberToDelete)
        {
            fputs(buffer, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("data.txt");
    rename("temp.txt", "data.txt");

    printf("Record %d deleted successfully.\n", recordNumberToDelete);

    return 0;
}