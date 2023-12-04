#include <stdio.h>
#include <conio.h>
int main()
{
    char name[10], add[15], ch = 'y', DOB[15];
    int roll;
    FILE *fp;
    fp = fopen("student.dat", "w");
    do
    {
        printf("\n Name of student, address, Roll, Date of birth: ");
        scanf("%s%s%s%d", name, add, DOB, &roll);
        fprintf(fp, "\n%s%s%s%d", name, add, DOB, roll);
        printf("\n\n Add more records[y/n]/:");
        ch = getche();
    } while (ch != 'n');
    fclose(fp);
    return 0;
}