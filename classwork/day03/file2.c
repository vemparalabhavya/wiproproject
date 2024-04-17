#include <stdio.h>
int main()
{
    int SLNo,ID;
    char Name[50],Gender,Address[100];
    float Salary;
    long long int phno;

    printf("Enter Employee SLNo:");
    scanf("%d",&SLNo);
    printf("Enter Employee ID:");
    scanf("%d",&ID);
    printf("Enter Employee Name:");
    scanf("%s",&Name);
    printf("Enter Employee Gender:");
    scanf("%c",&Gender);
    printf("Enter Employee Salary:");
    scanf("%f",&Salary);
    printf("Enter Employee Phone Number:");
    scanf("%11d",&phno);
    printf("Enter Employee Address:");
    scanf("%s",&Address);

    printf("===========================\n");
    printf("        Employee      Details      \n");
    printf("===========================\n");
    printf("SLNo\tID\tName\tGender\tSal\tphno\tAddress\n");
    printf("----\t---\t-----\t------\t---\t-----\t--------\tn");
    printf("%d\t%d\t%s\t%c\t.1f\t%11d\t%s\n",SLNo,ID,Name,Gender,Salary,phno,Address);
    return 0;


}