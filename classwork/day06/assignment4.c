/*
Q4.find a partition point in array 
Given an unsorted array of integers.Find an element such that all the elements to its left are
smaller and to its right are greater.Print -1 if no such element exists.
*/


#include <stdio.h>
int findPartitionpoint(int arr[],int n){
    int leftmax[n],rightmin[n];
    int maxsofar = arr[0],minsofar =arr[n-1];
    for(int i=0;i<n;i++){
        maxsofar = (arr[i]>maxsofar) ? arr[i] : maxsofar;
        leftmax[i] =maxsofar;
    }
    for(int i=n-1;i>=0;i--){
        minsofar = (arr[i]< maxsofar) ? arr[i] : minsofar;
        rightmin[i] = minsofar;
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]>=leftmax[i] && arr[i]<=rightmin[i]){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[] ={4,3,2,5,8,6,7};
    int n=sizeof(arr) /sizeof(arr[0]);
    int partitionPoint = findPartitionpoint(arr,n);
    printf("Partition point:%d\n",partitionPoint);
    return 0;
}