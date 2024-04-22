/*
2.Read the content from the records of employee and store in structure variable
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_EMPLOYEES 100
#define MAX_NAME_LENGTH 50
struct Employee {
    char name[MAX_NAME_LENGTH];
    int age;
    float salary;

};
int main(){
    struct Employee employees[MAX_EMPLOYEES];
    int numEmployees =0;
    FILE *file=fopen("emp1.txt","r");
    if(file == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    char line[100];
    while(fgets(line,sizeof(line),file)!=NULL){
        char *token=strtok(line,"|");
        if(token !=NULL){
            strcpy(employees[numEmployees].name,token);
            token=strtok(NULL,"|");
            if(token !=NULL){
                employees[numEmployees].age=atoi(token);
                token =strtok(NULL,"|");
                if(token !=NULL){
                    employees[numEmployees].salary=atof(token);
                    numEmployees++;

                }
            }
        }
    }
    fclose(file);
    printf("Employee records:\n");
    for(int i=0;i<numEmployees;i++){
        printf("Name: %s,Age: %d,Salary: %.2f\n",employees[i].name,employees[i].age,employees[i].salary);
    }
    return 0;
}