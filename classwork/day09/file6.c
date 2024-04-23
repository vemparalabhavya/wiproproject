#include <stdio.h>
#include <stdlib.h>
typedef struct node 
{
    int val;
    struct node *next;
    struct node *prev;
}NODE;
void dispF(NODE *);
void dispB(NODE *);
int main()
{
    int ch=1;
    NODE *nn=NULL;
    NODE *head=NULL, *temp=NULL;
    while(ch)
    {
        nn=(NODE *)malloc(sizeof(NODE));
        printf("\nEnter the new Node value: ");
        scanf("%d",&nn->val);
        nn->next=NULL;
        nn->prev=NULL;
        if(head==NULL)
        {
            //list is empty
            head=nn;
            temp=nn;
        }
        else
        {
            /* list is present */
            head->next=nn;
            nn->prev=head;
            head=head->next;
        }
        printf("\nDo you want to add new Node(1/0): ");
        scanf("%d",&ch);
        
    }//end of while loop
    head=temp;
    dispF(head);
    dispB(head);
    printf("\n\n");
    free(temp);
    return 0;
}
void dispF(NODE *head)
{
    printf("\nForward List is\n");
    while(head !=NULL)
    {
        //printf("%d\t%u is storimg %u->",head->val,head,head->next);
        printf("%d->",head->val);
        head=head->next;
    }
    printf("NULL\n");
    printf("\n\n===============\n");
}
void dispB(NODE *head)
{
    printf("\nBackward list is\n");
    while(head->next !=NULL)
    {
        head=head->next;
    }
    do{
        printf("%d->",head->val);
        head=head->prev;
    }while(head !=NULL);
    printf("NULL\n");
    printf("\n\n=================\n");
}