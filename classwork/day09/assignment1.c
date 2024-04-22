/*
1.Capture the employ records in the struture and store it in a file.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Employee {
    char Name[50],Gender;
    int Age,SLNo,ID;
    float salary;
    
};
int main() {
    struct Employee employes[2];
    for(int i=0;i<2;i++){
        printf("Enter details for employee %d:\n",i+1);
        printf("SLNo: ");
        scanf("%d", &employes[i].SLNo);
        printf("ID: ");
        scanf("%d", &employes[i].ID);
        printf("Name: ");
        scanf("%s", &employes[i].Name);
        printf("Gender: ");
        scanf("%c",&employes[i].Gender);
        printf("Age: ");
        scanf("%f",&employes[i].Age);
        printf("salary: ");
        scanf("%f",&employes[i].salary);
    }
    FILE *file =fopen("emp.txt","w");
    if(file == NULL){
        printf("Error opening file!\n");
        return 1;
    }

    for(int i=0;i<2;i++){
        fprintf(file,"Employee%d\n",i+1);
        fprintf(file, "SLNo: %d\n",employes[i].SLNo);
        fprintf(file, "ID: %d\n",employes[i].ID);
        fprintf(file, "Name: %d\n",employes[i].Name);
        fprintf(file, "Gender: %c\n",employes[i].Gender);
        fprintf(file, "Age: %f\n",employes[i].Age);
        fprintf(file, "salary: %f\n",employes[i].salary);
        fprintf(file,"\n");
    }
    printf("Employee records stored in emp.txt\n");
    return 0;
}