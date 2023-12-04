#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char name[10], pub[15], ch = 'y';
    long int p;
    FILE *fp;
    fp = fopen("book.dat", "w");
    do
    {
        printf("\n Name of book, Publisher, Price: ");
        scanf("%s%s%ld", name, pub, &p);
        fprintf(fp, "\n%s%s%ld", name, pub, p);
        printf("\n\n Add more records[y/n]/:");
        ch = getche();
    } while (ch != 'n');
    fclose(fp);
    return 0;
}