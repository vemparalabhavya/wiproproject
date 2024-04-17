/*
demo on while loop
*/
#include <stdio.h>
int main()

{
    int n= 10;
    int i=0
    while(i<=5) //outer loop
    {
        printf("/ni=%d",i);
        j=10;
        while(j<=50) //inner loop
        {
            printf("/nj=%d",j);
            j=j+10;
        }
        i++;
    }
    printf("/nProgram end/n");
    return 0;
}