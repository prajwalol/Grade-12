/*27.	Write a program using structure to supply the information NAME of book, Publisher, Edition and Price.
Also display the records SORTING in Ascending Order by Name of Book.*/
#include <stdio.h>
#include <string.h>

struct Book
{
    char name[100];
    char pub[100];
    int edt;     // Changed data type to int for Edition
    float price; // Changed data type to float for Price
};

int main()
{
    struct Book d[100], temp;
    int n, i, j;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter details of book %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", d[i].name);
        printf("Publisher: ");
        scanf("%s", d[i].pub);
        printf("Edition: ");
        scanf("%d", &d[i].edt); // Use %d to read the Edition as an integer
        printf("Price: ");
        scanf("%f", &d[i].price); // Use %f to read the Price as a float
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(d[i].name, d[j].name) > 0)
            {
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }

    printf("\nRecords Sorted in Ascending Order by Name of Book:\n");
    printf("\nName\tPublisher\tEdition\tPrice\n");
    printf("--------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\t%s\t\t%d\t\t%.2f\n", d[i].name, d[i].pub, d[i].edt, d[i].price);
    }

    return 0;
}
