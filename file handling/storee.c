
#include <conio.h>
#include <stdio.h>
int main()
{
    char name[20], ch = 'y';
    int c;
    FILE *fp;
    fp = fopen("book.rec", "w");
    do
    {
        printf("\n Name of Book and Price: ");
        scanf("%s%d", name, &c);
        fprintf(fp, "\n%s\t%d", name, c);
        printf("\n\nAdd more records[y/n]: ");
        ch = getche();
    } while (ch != 'n');
    fclose(fp);
    return 0;
}
