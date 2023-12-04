// b pg 233
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

struct Record
{
    char firstName[50];
    char lastName[50];
    char address[100];
    char telephone[15];
};

int main()
{
    FILE *file;
    struct Record record;

    file = fopen("tele.dat", "rb");
    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    char choice = 'y';

up:

    printf("Enter First Name: ");
    scanf("%s", record.firstName);

    printf("Enter Last Name: ");
    scanf("%s", record.lastName);

    printf("Enter Address: ");
    scanf("%s", record.address);

    printf("Enter Telephone: ");
    scanf("%s", record.telephone);

    fwrite(&record, sizeof(struct Record), 1, file);

    printf("Record added successfully.\n");

    printf("Do you want to add another record? (y/n): ");
    choice = getche();

    if (choice == 'y')

        goto up;

    fclose(file);

    return 0;
}
