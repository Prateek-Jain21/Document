#include<stdio.h>
#define MAX 10
void ENQUEUE(int *FRONT, int *REAR, int a[]);
void DEQUEUE(int *FRONT, int *REAR, int a[]);
void DISPLAY(int FRONT, int REAR, int a[]);
int IS_EMPTY(int FRONT);
int IS_FULL(int FRONT, int REAR);
int main()
{
    int FRONT=-1;
    int REAR=-1;
    int a[MAX];
    int ch,i;
    do{
        printf("enter 1 for insertion\n");
        printf("enter 2 for deletion\n");
        printf("enter 3 for display\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case (1):
        {
            ENQUEUE( &FRONT,  &REAR,  a);
            break;
        }
        case (2):
        {
            DEQUEUE( &FRONT,  &REAR,  a);
            break;
        }
        case (3):
        {
            DISPLAY( FRONT,  REAR,  a);
            break;
        }
        default:
        {
            i=1;
        }
    }
    }while(i!=1);
    
}
  
 void ENQUEUE(int *FRONT, int *REAR, int a[])
{
    int n;
    if(IS_FULL(*FRONT, *REAR))
    {
        printf("queue is full\n");
    }
    else if (*REAR==-1)
    {
        *FRONT = *REAR = 0;
        printf("enter value\n");
        scanf("%d",&n);
        printf("\ninserted value:%d\n",n);
        a[*REAR]=n;
        
    }
    else
    {
        *REAR= (*REAR+1)% MAX;
        printf("enter value");
        scanf("%d",&n);
        a[*REAR]=n;
        printf("\ninserted value:%d\n",n);
        


    }
}
void DEQUEUE ( int *FRONT, int *REAR, int a[])
{
    if(IS_EMPTY(*FRONT))
    {
        printf("queue is empty\n");
    }
    else if(*FRONT==*REAR)
    {
        int NUM;
        NUM=a[*FRONT];
        printf("Dequeued element: %d\n", NUM);
        *FRONT=*REAR=-1;
       
    }
    else
    {
         int NUM;
        NUM=a[*FRONT];
         printf("deleted element:%d\n",NUM);
        *FRONT=(*FRONT+1)% MAX;
    }
    
}
void DISPLAY ( int FRONT, int REAR, int a[])
{
     int i;
    if(IS_EMPTY(FRONT))
    {
       
         printf("queue is empty\n");
    }
    else
    {
         i=FRONT;
         while (i!= REAR)
         {
            printf("%d",a[i]);
             i = (i + 1) % MAX;
            printf("%d\n", a[REAR]);
         }
         printf("\n");
    }
}
int IS_FULL (int FRONT, int REAR)
{
    if(FRONT==(REAR+1)% MAX)
    {
        return 1;
    }
    else
        return 0;
}
 int IS_EMPTY ( int FRONT)
{
    if(FRONT==-1)
    {
        return 1;
    }
    else
    { 
        return 0;
    }
 }