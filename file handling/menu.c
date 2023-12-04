#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char fname[10], lname[10], addr[10], srch1[10] = "", srch2[10] = "", ch = 'y';
    long int tel, newTel;
    int choice, flag = 0;
    int option, count = 0;
    FILE *fp;
    FILE *fp1;

    printf("\t\t * **MENU * **");
    printf("\n1.Add Records");
    printf("\n2.View Records");
    printf("\n3.Search Records");
    printf("\n4.Delete Records");
    printf("\n5.Update Records");
    printf("\n6.Exit");
    printf("\n\nEnter your Choice[1/2/3/4/5/6]? ");

    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("\n\n * **ADDING RECORDS * **");
        printf("\n * *********************************");
        fp = fopen("Tele.dat", "a");
        do
        {
            printf("\nFname, Lname, Address and Telephone? ");
            scanf("%s %s %s %ld", fname, lname, addr, &tel);

            fprintf(fp, "%s\t%s\t%s\t%ld\n", fname, lname, addr, tel);
            printf("\nAdd More Records[y/n]? ");
            count += 1;
            ch = getch();
        } while (ch != 'n');
        printf("\n\n%d Records Stored Successfully!\n\n", count);
        fclose(fp);
        break;

    case 2:
        printf("\n\n * **VIEWING RECORDS * **");
        printf("\n * *********************************");
        fp = fopen("Tele.dat", "r");
        printf("\t * *Display from File * *");
        printf("\nFname\tLname\tAddress\tTelephone");
        printf("\n===================================");
        while (fscanf(fp, "%s %s %s %ld", fname, lname, addr, &tel) != EOF)
        {
            printf("\n%s\t%s\t%s\t%ld", fname, lname, addr, tel);
            count += 1;
        }
        fclose(fp);
        printf("\n===================================");
        printf("\n\nTotal Records found = %d\n\n", count);
        break;

    case 3:
        printf("\n\n * **SEARCHING RECORDS * **");
        printf("\n * *********************************");

        fp = fopen("Tele.dat", "r");
        printf("\t * *Display from File * *");
        printf("\n1.First Name");
        printf("\n2.Last Name");
        printf("\n\nEnter your Choice[1/2]? ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter First Name to Search: ");
            scanf("%s", srch1);
        }
        else if (choice == 2)
        {
            printf("Enter Last Name to Search: ");
            scanf("%s", srch2);
        }
        else
        {
            printf("\nInvalid Choice!\n");
            return 1;
        }

        printf("\n===================================");
        while (fscanf(fp, "%s %s %s %ld", fname, lname, addr, &tel) != EOF)
        {
            if ((choice == 1 && strcmpi(srch1, fname) == 0) ||
                (choice == 2 && strcmpi(srch2, lname) == 0))
            {
                flag++;
                printf("\n%s\t%s\t%s\t%ld", fname, lname, addr, tel);
            }
        }
        fclose(fp);
        if (flag == 0)
            printf("\n\nRecord Not found... !");
        break;

    case 4:
        printf("\n\n * **DELETING RECORDS * **");
        printf("\n * *********************************");
        count = 0;
        fp = fopen("Tele.dat", "r");
        fp1 = fopen("temp.dat", "w");
        printf("\t * *Deleting Records from File * *");
        printf("\nFname\tLname\tAddress\tTelephone");
        printf("\n===================================");

        while (fscanf(fp, "%s %s %s %ld", fname, lname, addr, &tel) != EOF)
        {
            printf("\n%s\t%s\t%s\t%ld", fname, lname, addr, tel);
            printf("\n\nDelete this record[y/n]? ");
            ch = getch();
            count += 1;
            if (ch != 'y')
                fprintf(fp1, "%s\t%s\t%s\t%ld\n", fname, lname, addr, tel);
        }

        fclose(fp);
        fclose(fp1);
        printf("\n===================================");
        printf("\n\n%d Record(s) Deleted Successfully\n\n", count);

        remove("Tele.dat");
        rename("temp.dat", "Tele.dat");
        break;

    case 5:
        printf("\n\n * **UPDATING RECORDS * **");
        printf("\n * *********************************");
        fp = fopen("Tele.dat", "r");
        fp1 = fopen("temp.dat", "w");
        printf("\t * *Updating Telephone Number from File * *");
        printf("\nFname\tLname\tAddress\tTelephone");
        printf("\n===================================");

        while (fscanf(fp, "%s %s %s %ld", fname, lname, addr, &tel) != EOF)
        {
            printf("\n%s\t%s\t%s\t%ld", fname, lname, addr, tel);
            printf("\n\nUpdate Telephone[y/n]? ");
            ch = getch();
            if (ch == 'y')
            {
                printf("Enter NEW Telephone number: ");
                scanf("%ld", &newTel);
                count += 1;
                fprintf(fp1, "%s\t%s\t%s\t%ld\n", fname, lname, addr, newTel);
            }
            else
            {
                fprintf(fp1, "%s\t%s\t%s\t%ld\n", fname, lname, addr, tel);
            }
        }

        printf("\n===================================");
        printf("\n\nTotal Records Updated = %d\n\n", count);
        fclose(fp);
        fclose(fp1);
        remove("Tele.dat");
        rename("temp.dat", "Tele.dat");
        break;

    case 6:
        printf("\nAre You SURE to Exit[y/n]? ");
        ch = getch();
        if (ch == 'y')
            printf("\n\nThanks a TON for being with us!\n");
        break;

    default:
        printf("\nWrong Choice! Please Try Again!\n");
    }
    return 0;
}
