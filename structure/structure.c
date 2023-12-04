#include<stdio.h>
int main(){
    struct student
    {
        char fname [10];
        char lname [10];
        int grade ;
        float marks ;
    };
    struct student st[45];

int i;
for(i = 1; i <= 45; i++)
{
    printf("\n Enter first name of student: ");
    scanf("%s",st[i].fname);
    printf("\n Enter last name of student: ");
    scanf("%s",st[i].lname);
    printf("\n Enter his/her grade: ");
    scanf("%d",&st[i].grade);
    printf("\n Enter marks in computer science: ");
    scanf("%f",&st[i].marks);
}
    printf("\n\n Display of records \n");
        for(i = 1; i <= 45; i++)
        {
            printf("\n %s \t %s\t %d\t %f",st[i].fname,st[i].lname,st[i].grade,st[i].marks);
        }
        return 0;
}