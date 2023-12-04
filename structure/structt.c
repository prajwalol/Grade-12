

#include<stdio.h>
#include<string.h>
    int main(){
    struct info {
        char fname[15];
        char lname[15];
        char grade[15];
        float marks;
    } s[100], temp ;
    int n, i, j;
    printf("Enter the total records: ");
    scanf("%d",&n);
        for(i=1; i<=1; i++)
            {
                printf("Enter Fname, Lname, Grade and marks in computer science of %d students:",i);
                scanf("%s %s %s %f", s[i].fname,  s[i].lname, s[i].grade, &s[i].marks);
            }
    printf(" Display of regular records\n");
    printf(" Fname\t Lname\t Grade\t Marks \n");
    printf("=================================\n");
    for(i=1; i<=n; i++)
        {
            printf("\n%s\t %s\t %s\t %.2f", s[i].fname,  s[i].lname, s[i].grade, &s[i].marks);
        }
        for ( i = 1; i <= n; i++)
            {
                for(j=1; j<=n; j++)
                {
                  if(strcmp(s[i].fname, s[j].fname)>0)
                    {
                        temp = s[i];
                        s[i] = s[j];
                        s[j] = temp;
                    }
                }
            }
    printf(" Display of regular records\n");
    printf(" Fname\t Lname\t Grade\t Marks \n");
    printf("=================================\n");
    for(i=1; i<=n; i++)
        {
            printf("\n%s\t %s\t %s\t %.2f", s[i].fname,  s[i].lname, s[i].grade, &s[i].marks);
        }
    return 0;
    }