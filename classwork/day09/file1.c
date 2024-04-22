#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int ret=0;
    FILE *fptr=NULL;
    fptr=fopen("text2.txt","w+");
    if(fptr==NULL)
    {
        printf("\nCheck the file name\n");
        return 0;
    }
    printf("\nFile Exists\n");
    ret=fprintf(fptr,"BHAVYA");
    printf("\nRet Value=%d",ret);
    return 0;
}