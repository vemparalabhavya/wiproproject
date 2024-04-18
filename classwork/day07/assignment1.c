/*
assignment 1.Sort the array element in ascending order using pointer notation
*/


#include <stdio.h>
void sort(int n,int* ptr)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr +j)<*(ptr +i)){
            t=*(ptr +i);
            *(ptr +i)=*(ptr +j);
            *(ptr +j)=t;

            }
            

        }
        
        
    }
    //print the numbers
for(i=0;i<n;i++){
    printf("%d",*(ptr +i));
}
}


int main()
{
    int n=5;
    int arr[] = {0,21,16,10,9};
    sort(n,arr);
    printf("\n\n");
    return 0;

}
