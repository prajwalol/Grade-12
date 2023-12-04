#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char name[10], title[15], edt[15], ch = 'y';
    int price;
    FILE *fp;
    fp = fopen("info.dat", "w");
    do
    {
        printf("\n Name of author, book, edition date, price: ");
        scanf("%s%s%s%d", name, title, edt, &price);
        fprintf(fp, "\n%s%s%s%d", name, title, edt, price);
        printf("\n\n Add more records[y/n]/n:");
        ch = getche();
    } while (ch != 'n');
    fclose(fp);
    return 0;
}
