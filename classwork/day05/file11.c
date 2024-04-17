#include <stdio.h>
int main()
{
    int a,b;
    char ch;
    char name[20];
    scanf("%d%d%s",&a,&b,&name[0]);
    scanf("%c",&ch);
    printf("/nvalues scanned\n");
    printf("\n%d\t%d\t%s\t%c",a,b,name,ch);
    printf("\n\n");
    return 0;
}