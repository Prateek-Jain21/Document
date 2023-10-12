#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}Q;

void Insert (Q** FRONT,Q** REAR)
{
    Q* temp;
    temp=(Q*) malloc(sizeof(Q*));

    if(temp == NULL)
    {
        printf("Stack is empty \n");   
    }
    else if(*REAR== NULL)
    {
        printf("Enter info\n");
        scanf("%d",&temp->info);
        temp->next=NULL;
        *FRONT=temp;
        *REAR=temp;
    }
    else
    {  
        printf("Enter info \n");
        scanf("%d",&temp->info);
        (*REAR)->next = temp;
        temp->next = NULL;
        *REAR = temp;
    }
}

void dequeue(Q** FRONT , Q** REAR)
{
    if(*FRONT == NULL)
    {
        printf("Under flow\n");
    }
    else
    {
        Q* p =*FRONT;
        *FRONT=p->next;
        printf("Deleted elem id %d \n",p->info);
        free(p);
    }
}

void DISPLAY (Q* FRONT ,Q* REAR)
{
    if(FRONT==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {    
        Q* p;
        p=FRONT;
        while(p!= NULL)
        {
            printf("%d\n",p->info);
            p=p->next;
        }
    }
}

int main ()
{
    Q* FRONT = NULL;
    Q* REAR = NULL;
    int ch;
    do
    {
        printf("Enter choice \n 1 - for push \n 2 - for pop \n 3 - for display\n ");
        scanf("%d",&ch); 
        switch(ch)
        {
            case 1 :
             Insert (&FRONT , &REAR);
            break;
            case 2 :
             dequeue (&FRONT,&REAR);
            break;
            case 3 :
             DISPLAY(FRONT,REAR);
            break;
            default:
            printf("wrong choice \n");
            exit(0);
        }
    }
    while(1);
    return 0 ;
}