/*
demo on do while
sy:
do
{
    body of loop

}while(cond);
*/
#include <stdio.h>
int main()
{
    int i;
    i=0;
    do
    {
       printf("\ni=%d",i);
       i++;
    } while (i<10);
    printf("\n\n");
    return 0;
    
}