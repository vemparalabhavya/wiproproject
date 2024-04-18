#include <stdio.h>
int main()
{
    int a[1000],j,i,n,k,temp;
    printf("enter the size");
    scanf("%d",&n);
    printf("\nenter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);

    temp=a[0];
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=temp;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n\n");
}