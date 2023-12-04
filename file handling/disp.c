#include <stdio.h>

int main()
{
    char name[20];
    int price;
    FILE *fp = fopen("book.rec", "r");
    FILE *op = fopen("output.rec", "w");

    if (!fp || !op)
    {
        perror("Error opening files");
        return 1;
    }

    while (fscanf(fp, "%19s %d", name, &price) == 2)
    {
        printf("%s %d\n", name, price);
        fprintf(op, "%s %d\n", name, price);
    }

    fclose(fp);
    fclose(op);
    return 0;
}
