#include <stdio.h>

int sub(int,int);
int addition(int a,int b){
    return (a+b);
}

int a=10;
int main()

{
    int retValue = 0;
    printf("Hello world");
    retValue = addition(20,10);
    printf("\naddition=%d",retValue);

    return 0;
}


