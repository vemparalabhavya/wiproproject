

/*
demo on pointers
*/

#include <stdio.h>
int main()
{
int qty=100;
int *ptr;
printf("\nAddress of qty =%u  and its value=%d",&qty,qty);
printf("\nAddress of ptr = %u and its value=%u",&ptr,ptr);

ptr = &qty;





printf("/nAddress of qty = %u and its value=%d",&qty,qty);
printf("/nAddress of ptr = %u and its value=%u",&ptr,ptr);
printf("\n\n");
return 0;
}










