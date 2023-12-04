// 233->c

#include <stdio.h>
#include <string.h>

struct Person
{
    char fname[50];
    char lname[50];
    char numb[15];
};

int main()
{
    FILE *file;
    struct Person person; 
    char search[50];
    int found = 0;

    file = fopen("tele.dat", "rb");

    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }
    printf("Enter the first name or last name to search: ");
    scanf("%s", search);

    while (fread(&person, sizeof(struct Person), 1, file))
    {
        if (strcmp(person.fname, search) == 0 || strcmp(person.lname, search) == 0)
        {
            printf("First Name: %s\n", person.fname);
            printf("Last Name: %s\n", person.lname);
            printf("Phone Number: %s\n", person.numb);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Person not found in the data file.\n");
    }

    fclose(file);
    return 0;
}
//    5!=120(true)
