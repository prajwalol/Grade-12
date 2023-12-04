// salary sort
#include <stdio.h>
#include <string.h>
int main()
{
    char name[15], post[15], dep[15];
    int sal, count = 0;
    FILE *fp;
    fp = fopen("info.dat", "r");
    if (fp == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }
    while (fscanf(fp, "%s%s%s%d", name, post, dep, &sal) != EOF)

    {
        if (sal > 5000)
            count += 1;
        printf("\n%s%s%s%d", name, post, dep, sal);
        printf("\nThe number of records is %d ", count);
    }
    fclose(fp);
    return 0;
}