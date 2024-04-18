#include <stdio.h>
int main()
{
    int a[3]={10,20,30};
    int i;
    int *ptr;
    //ptr is pointing to BA of array
    ptr =&a[0];
    for(i=0;i<3;i++){
        printf("%d\t",a[i]);
        printf("\nptr=%d",*ptr);
       
    }
     printf("\n\n");
        return 0;
}