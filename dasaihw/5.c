// #include <stdio.h>

// struct Employee
// {
//     char name[15];
//     char post[15];
//     char dep[15];
//     int sal;
// };

// void addEmployee()
// {
//     struct Employee emp;
//     char ch = 'y';

//     FILE *fp = fopen("emp.bin", "ab");

//     if (fp != NULL)
//     {
//         do
//         {
//             printf("Enter employee details:\n");
//             printf("Name: ");
//             scanf("%s", emp.name);

//             printf("Post: ");
//             scanf("%s", emp.post);

//             printf("Department: ");
//             scanf("%s", emp.dep);

//             printf("Salary: ");
//             scanf("%d", &emp.sal);

//             fwrite(&emp, sizeof(struct Employee), 1, fp);

//             printf("\nAdd more records[y/n]: ");
//             ch = getchar();
//             getchar();

//         } while (ch != 'n');

//         fclose(fp);
//         printf("Employee information added to the file.\n");
//     }
//     else
//     {
//         printf("Error opening the file.\n");
//     }
// }

// void displayEmployees()
// {
//     struct Employee emp;
//     FILE *fp = fopen("emp.bin", "rb");

//     if (fp == NULL)
//     {
//         printf("Error opening the file.\n");
//         return;
//     }

//     printf("Employee's Information\n");
//     printf("====================\n");

//     while (fread(&emp, sizeof(struct Employee), 1, fp) == 1)
//     {
//         if (emp.sal > 30000)
//         {
//             printf("Name: %s Post: %s Department: %s Salary: %-d\n", emp.name, emp.post, emp.dep, emp.sal);
//         }
//     }

//     fclose(fp);
// }

// int main()
// {
//     addEmployee();
//     displayEmployees();

//     return 0;
// }
