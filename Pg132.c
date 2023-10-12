#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct CQ
{
    int arr[MAX];
    int FRONT,REAR;

} *st;
void ENQUEUE(struct CQ*);
void DEQUEUE(struct CQ*);
void TRAVERSE(struct CQ*);
int main()
{
    struct CQ S;
    st=&S;
    st->FRONT=-1;
    st->REAR=-1; 
    int ch;
    do
    {
    printf("\nenter 1 for insertion\n");
    printf("enter 2 for deletion\n");
    printf("enter 3 for display\n");
    printf("enter your choice\n");
    scanf("%d",&ch);
    
        switch(ch)
        {
            case 1:
            {
              
                ENQUEUE(st);
                break;
            }
            case 2:
            {
                DEQUEUE(st);
                break;
            }
            case 3:
            {
                TRAVERSE(st);
                break;
            }
            default:
            {
                exit(0);
            }
        }
    } while(1);
     
}
void ENQUEUE(struct CQ*st)
{
    int n;
    if(st->FRONT==(st->REAR)+1%MAX)
    {
        printf("cqueue is full\n");
    }
    else if(st->REAR==-1)
    {
        st->FRONT=st->REAR=0;
        printf("insert element:\n");
        scanf("%d",&n);
        st->arr[st->REAR]=n;
        printf("inserted element:%d",n);
        
    }
    else
    {
        st->REAR=(st->REAR+1)%MAX;
        printf("enter value:\n");
        scanf("%d",&n);
        st->arr[st->REAR]=n;
        printf("inserted element: %d",n);

    }
}
void DEQUEUE(struct CQ*st)
{
    int num;
    if(st->FRONT==-1)
    {
        printf("cqueue is empty\n");
    }
    else if(st->FRONT==st->REAR)
    {
        st->FRONT=st->REAR=-1;
    }
    else
    {
        num=st->arr[st->FRONT];
        printf("deleted element: %d",num);
        st->FRONT=(st->FRONT+1)%MAX;
        

    }
}
void TRAVERSE(struct CQ*st)
{
    int i;
    if(st->FRONT==-1)
    {
        printf("cqueue is empty\n");
    }
    else
    {
        for(i=st->FRONT;i<st->REAR;i=(i+1)%MAX)
        {
            printf("%d",st->arr[i]);
        }

            printf("%d",st->arr[i]);
    }
}