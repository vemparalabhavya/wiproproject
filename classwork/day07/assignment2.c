#include <stdio.h>
int main()
{
    int a,b,choice;
    printf("Enter two integers:");
    scanf("%d%d",&a,&b);
    printf("Enter choice: 1.Addition 2.Subtraction 3.Multiplication 4.Division\n");
    scanf("%d",&choice);
    if(choice ==1)
    printf("Result:%d",a+b);
    else if(choice == 2)
    printf("Result:%d",a-b);
    else if(choice ==3)
    printf("Result:%d",a*b);
    else if(choice ==4){
        if(b!=0)
        printf("Result:%.2f",(float)a/b);
        else
        printf("Error! Division by zero not possible.");
    }
    else 
    printf("Error! Invalid choice.");
    return 0;
}