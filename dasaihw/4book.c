#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    float price;
};

void displayBook(const struct Book *book)
{
    printf("ID: %-3d Title: %-30s Author: %-30s Price: %.2f\n", book->id, book->title, book->author, book->price);
}

void updateBook(FILE *file, int targetId)
{
    struct Book book;

    while (fread(&book, sizeof(struct Book), 1, file) == 1)
    {
        if (book.id == targetId)
        {
            printf("Enter new details for the book (Title Author Price): ");
            scanf("%s %s %f", book.title, book.author, &book.price);

            fseek(file, -sizeof(struct Book), SEEK_CUR);
            fwrite(&book, sizeof(struct Book), 1, file);

            printf("Book with ID %d has been updated.\n", targetId);
            return;
        }
    }

    printf("Book with ID %d not found.\n", targetId);
}

void addBook(FILE *file)
{
    struct Book book;

    printf("Enter book details (ID Title Author Price): ");
    scanf("%d %s %s %f", &book.id, book.title, book.author, &book.price);

    fseek(file, 0, SEEK_END);
    fwrite(&book, sizeof(struct Book), 1, file);

    printf("Book with ID %d has been added.\n", book.id);
}

int main()
{
    FILE *file = fopen("books.dat", "rb+");

    if (!file)
    {
        printf("Error opening the file.\n");
        return 1;
    }
    updateBook(file, 3);
    addBook(file);

    fseek(file, 0, SEEK_SET);
    struct Book book;
    while (fread(&book, sizeof(struct Book), 1, file) == 1)
    {
        displayBook(&book);
    }

    fclose(file);

    return 0;
}
