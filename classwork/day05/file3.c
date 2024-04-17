#include <stdio.h>
int main()
{
    int i,num,sum_even=0,sum_odd=0;
    printf("Enter the value of num\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        sum_even = sum_even+i;
        else
        sum_odd = sum_odd+i;
    }
    printf("sum of all odd numbers = %d\n", sum_odd);
    printf("sum of all even numbers = %d\n", sum_even);
 


}