
#include <conio.h>
#include <stdio.h>
int main()
{
    char name[20], post[20], ch = 'y';
    int p;
    FILE *fp;
    fp = fopen("staff.rec", "w");
    do
    {
        printf("\n Name of employee, Post, Salary:");
        scanf("%s%s%d", name, post, &p);
        fprintf(fp, "\n%s\t%s\t%d", name, post, p);
        printf("\n\nAdd more records[y/n]: ");
        ch = getche();
    } while (ch != 'n');
    fclose(fp);
    return 0;
}
