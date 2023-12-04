#include <stdio.h>
int main()
{
    char name[20], post[20];
    int p, count = 0;
    FILE *fp;
    fp = fopen("staff.rec", "r");
    if (fp == NULL)
    {
        printf("Error opening file.");
        return 1;
    }
    printf("salaries between 35,000 and 50,000:\n\n");
    while (fscanf(fp, "%s %s %d", name, post, &p) != EOF)
    {
        if (p >= 35000 && p <= 50000)
        {
            printf("Name: %s\n", name);
            printf("Post: %s\n", post);
            printf("Salary: %d\n", p);
            printf("\n");
            count += 1;
        }
    }
    if (count == 0)
    {
        printf("Not found\n");
    }
    else
    {
        printf("total num of employees %d\n", count);
    }
    fclose(fp);
    return 0;
}
