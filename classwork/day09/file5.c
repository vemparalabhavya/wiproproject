/*
Demo on queues
*/
#include <stdio.h>
#define MAX 5
int FRONT =0;
int RARE=0;
int arr[MAX];
void disp();

int myQueue(int);
int myDqueue();
int main()
{
    disp();
    myQueue(10);
    myQueue(20);
    myQueue(30);
    myQueue(40);
    myQueue(50);
    myQueue(60);
    disp();
    myDqueue();
    disp();
    myDqueue();
    myDqueue();
    myDqueue();
    myDqueue();
    myDqueue();
    disp();
    


}
void disp()
{
    int i;
    if(FRONT==RARE)
    {
        printf("\nQueue is Empty\n");
        return ;
    }
    printf("\nQueue Elements are\n");
    for(i=FRONT;i<RARE;i++)
    printf("%d->",arr[i]);
    printf("\n=============\n");
}
int myQueue(int val)
{
    if(RARE==MAX)
    {
        printf("\nQueue is FULL\n");
        return;
    }
    arr[RARE]=val;
    RARE++;
}
int deQueue()
{
    if(FRONT==RARE)
    {
        printf("\nQueue is Empty\n");
        FRONT=0;
        RARE=0;
        return;
    }
    printf("\n%d element has been dequeued\n",arr[FRONT]);
    FRONT++;
}