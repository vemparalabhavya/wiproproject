#include <stdio.h>
int main()
{
    int qty=100;
    char ch='A';
    float f=10.5;
    double d=101.22;
    void *ptr;
    printf("\nAddress of qty =%u and its value=%d",&qty,qty);
    printf("\nAddress of ch =%u and its value=%c",&ch,ch);
    printf("\nAddress of f =%u and its value=%f",&f,f);
    printf("\nAddress of d =%u and its value=%lf",&d,d);
    printf("\nAddress of ptr =%u and its value=%u",&ptr,ptr);
    printf("\n\n");
    ptr = &qty;
    printf("\nAddress of qty =%u and its value=%d",&qty,qty);
     printf("\nAddress of ptr =%u and its value=%u",&ptr,ptr);
     printf("\nvalue of qty using ptr=%d",(int *)ptr);
     printf("\n\n");
     return 0;
}