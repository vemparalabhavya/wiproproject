#include <stdio.h>
int main()
{
    int N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    int num =1;
    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%d",num++);
            if(j<N-1){
            
            printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}