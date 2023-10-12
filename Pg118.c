#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void INSERT();
void DELETE();
void SHOW();
int FRONT=-1;
int REAR= -1;
int a[MAX];
int main()

{
    int ch=0;
    do{
    printf("enter 1 for INSERTION\n");
    printf("enter 2 for DELETION\n");
    printf("enter 3 for SHOW\n");
    printf("enter your choice\n");
    scanf("%d",&ch);
    switch(ch)

    {
    case (1):
    {
        INSERT();
        break;
    }
    case (2):
    {
        DELETE();
        break;
    }
    case(3):
    {
        SHOW();
        break;
    }
    default : 
        exit(0);
    }
    } while(1);
    
    return 0;
}

void INSERT()
{
    int n;

  if(REAR==MAX-1)
  {
      printf("Queue is full\n");
  }
  else if(REAR==-1)
  {
      REAR=FRONT=0;
      printf("enter value\n");
      scanf("%d",&n);
      a[REAR]=n;
      printf("inserted element%d\n",a[REAR]);
  }
  else
  {
      
      REAR=REAR+1;
      printf("enter value\n");
      scanf("%d",&n);
      a[REAR]=n;
      printf("inserted element  %d\n",a[REAR]);
  }
} 

void DELETE()
{
    int num;
    if(FRONT==-1)
    {
        printf("Queue is empty\n");
    }
    else if(FRONT==REAR)
        {
        num=a[FRONT];
        printf("deleted element  %d\n", num);
        FRONT=REAR=-1;
        }
         else
       {
           num=a[FRONT];
           FRONT=FRONT+1;
          printf("deleted element  %d\n", num);
       }
    }
    
void SHOW()
{
    int i;
    if(FRONT==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        for(i=FRONT;i<=REAR;i++)
        {
            printf("%d",a[i]);
        }
        printf("\n");
    }
}