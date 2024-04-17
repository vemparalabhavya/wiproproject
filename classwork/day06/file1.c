/*
Demo on for loop
*/
#include <stdio.h>
int main()

{
    int i,j;
    for(i=0,j=10;i<5;i++,j+=10)
    {
        printf("\ni=%d\tj=%d",i,j);
    }
    printf("\n\n");
    return 0;
}