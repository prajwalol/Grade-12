#include <stdio.h>
#include <conio.h>
int main()
{
    char name[10], add[15], ch = 'y';
    long int cont, id;
    FILE *fp;
    fp = fopen("record.dat", "w");
    do
    {
        printf("\n Name, address, Id no, Contact: ");
        scanf("%s%s%ld%ld", name, add, &id, &cont);
        fprintf(fp, "\n%s%s%ld%ld", name, add, id, cont);
        printf("\n\n Add more records[y/n]/:");
        ch = getche();
    } while (ch != 'n');
    fclose(fp);
    return 0;
}