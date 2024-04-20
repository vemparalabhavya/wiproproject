/*
Q2.Program to find nth number made of given four digits 1,4,6 and 9 as the only digits.
*/

#include <stdio.h>
#include <math.h>
long long findNthNumber(int n){
    int digits[]={1,4,6,9};
    long long nth_number =0;
    int digit_count =0;
    while(n>0){
        nth_number =nth_number*10+digits[(n-1)%4];
        n =(n-1)/4;
        digit_count++;
    }
    return digit_count;
}
int main(){
    int T,N;
    printf("Enter the number of test cases:");
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        printf("Enter N for test case %d:",i+1);
        scanf("%d",&N);
        printf("Output for test case %d: %11d\n",i+1,findNthNumber(N));
    }
    return 0;
}