#include<stdio.h>
#include<stdlib.h>
typedef struct Snode
{
    int info;
    struct Snode *next;
}s;
void push(s **top)
{
    s *temp;
    temp = (s*)malloc(sizeof(s));
    if (temp == NULL)
    printf("Memory Is Not Available! \n");
    else
    {
        printf("Enter The Value ? \n");
        scanf("%d",&temp->info);
        temp->next = *top;
        *top = temp;
    }
    }
    void pop(s **top)
    {
        if(*top == NULL)
        printf("Linked List Is Empty \n");
        else
        {
         s *p1 = *top;
         printf("Deleted Info = %d \n",p1->info);
         *top = p1->next;
         free(p1);
        }
    }
    void display(s **top)
    {
        s *temp = *top;
        if (*top == NULL)
        printf("LINKED LIST IS Empty \n");
        else
        while(temp!=NULL)
        {
            printf("%d \n",temp->info);
            temp = temp->next;

        }
    }
    int main()
    {
          int c;
          s *top=NULL;
        do
        {
        printf("1. Push\n");
        printf("2. POP\n");
        printf("3. Display\n");
        scanf("%d",&c);
          switch (c) {
            case 1:
                push(&top);
                break;
            case 2:
                pop(&top);
                break;
            case 3:
                display(&top);
                break;
            default:
            exit(0);
        } 
    }while (1);
    }