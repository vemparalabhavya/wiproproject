#include <stdio.h>
int main()
{
    int n;
    int i,num;
    int ret=0;
    scanf("%d",&num);
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        ret =(ret*10) +num;
        printf("%d+",ret);
        i++;
    }
    return 0;
}