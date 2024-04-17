#include <stdio.h>


int main()
{
    //unsigned int i=2147483648;
    signed int i=424967295;
    float f;
    double d;
    char ch;






    printf("\nsizeof int =%1d value of i=%d",sizeof(i),i);
    printf("\nsizeof float =%1d",sizeof(f));
    printf("\nsizeof double =%1d",sizeof(d));
    printf("\nsizeof char =%1d",sizeof(ch));
    printf("\n\n");
    return 0;

}