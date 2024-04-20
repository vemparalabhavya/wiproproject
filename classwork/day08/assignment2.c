/*
Q1.Check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer:34
Output
34=3+31
34=5+29
noofways=4
noofways=-1
*/
#include <stdio.h>
int sum_of_two_primes(int n);
int main()
{
    int n,i;
    printf("Insert the num:");
    scanf("%d",&n);
    int flag=0;
    for(i=2;i<=n/2;++i)
    {
        //condition for i to be prime
        if(sum_of_two_primes(i)==1)
        {
            if(sum_of_two_primes(n-i)==1)
            {
                printf("%d can be expressed as the sum of %d and %d",n,i,n-i);
                flag=1;
            }
        }
    }
    if(flag==0)
    printf("%d cannot be expressed as the sum of two primes\n",n);
    return 0;
}
int sum_of_two_primes(int n)
{
    int i,isPrime=1;
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            isPrime=0;
            break;
        }
    }
    return isPrime;
}