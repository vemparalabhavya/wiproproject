/*
Q2.Problem statement:Given an unsorted array a of size N of non-negative integers,
find a continuous sub-array which adds to a given number sum.
*/
#include <stdio.h>
int findsubarray(int arr[],int n,int sum){
    int curr_sum = arr[0];
    int start =0;
    for(int i=1;i<=n;i++){
        while(curr_sum>sum &&start<i-1){
            curr_sum -= arr[start];
            start++;
        }
        if(curr_sum == sum){
            printf("Sum found between indexes %d and %d\n",start,i-1);
            return;
        }
        if(i<n){
            curr_sum +=arr[i];
        }
    }
    printf("No subarray found\n");
    return 0;
}
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum;
    printf("Enter the sum:");
    scanf("%d",&sum);
    findsubarray(arr,n,sum);
    return 0;
}
