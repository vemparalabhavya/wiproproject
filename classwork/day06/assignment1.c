/*
Q1.Rotate array every kth element
i/p
1 2 3 4 5 6 7 8 9
k=3
o/p
3 2 1 6 5 4 9 8 7
*/

#include <stdio.h>

int rotateArray(int arr[],int n,int k)
{
    for(int i=k-1;i<n;i+=k){
        int left =i-k+1;
        int right =i;
        while(left<right){
            int temp =arr[left];
            arr[left]= arr[right];
            arr[right]= temp;
            left++;
            right--;
        }
    }
    return 0;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    printf("Enter the value of k:");
    scanf("%d",&k);
    rotateArray(arr,n,k);
    printf("output:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}