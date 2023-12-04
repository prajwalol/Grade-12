#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char name[10], location[15], ch = 'y';
    long int cont;
    int n;
    FILE *fp;
    fp = fopen("info.dat", "w");
    do
    {
        printf("\n Name of school, location, Contact & NO. of staffs: ");
        scanf("%s%s%ld%d", name, location, &cont, &n);
        fprintf(fp, "\n%s%s%ld%d", name, location, cont, n);
        printf("\n\n Add more records[y/n]/:");
        ch = getche();
    } while (ch != 'n');
    fclose(fp);
    return 0;
}