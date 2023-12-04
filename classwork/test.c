#include<stdio.h>
int main()
{
    int roll;
    char name[15];
    float marks;
    int n,i;
    FILE*fp;
    fp=fopen("student,dat","W")
    printf("\nEnter the total record limit?");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    printf("\nEnter roll,name and marks in cs of %d student",i);
    scanf("%d%s%f",&roll,name &marks);
    printf("fp,"\n%d\t%s|t%f",roll,name,marks);
}
fclose(fp);
return 0;
}


