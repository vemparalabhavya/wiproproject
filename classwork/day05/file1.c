#include <stdio.h>
int main()
{
    int i,j=1,k=0,n;
    printf("\nEnter number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d,",k);
        j=j+2;
        k=k+j;
    }

}