#include<stdlib.h>
#include<stdio.h>
#define max 10
void push(int *p,int *n,int *m)
{
    int a;
    if(*m==(max-1))
    {
        printf("Quene Is Full");
    }
    else if(*m==-1)
    {
        *m = *n = 0;
        printf("Enter The Element? \n");
        scanf("%d",&a);
        *(p+(*m)) = a;
    }
    else
    {
        *m = *m + 1;
        printf("Enter The Element? \n");
        scanf("%d",&a);
        *(p+(*m)) = a;

    }
}
void pop(int *p,int *n,int *m)
{
    if(*n==-1)
    {
        printf("Quene Is Empty \n");

    }
    else if(*n==*m)
    {
        printf("The Popped Element is : %d \n",(*(p+(*n))));
        *n = *m = -1;

    }
    else
    {
        printf("The Popped Element is : %d \n",(*(p+(*n))));
        *n = *n + 1;

    }
}
int main()
{
    int c;
    
    int a[max];
    int f = -1;
    int r = -1;
    do
    {
    printf("Enter 1 if you want to Push And 2 If You want to Pop element? \n");
    scanf("%d",&c);
    switch(c)
    {
    case 1 : push(a,&f,&r);
             break;
    case 2: pop(a,&f,&r);
             break;
    default : exit(0);
    }
    }while(1);
}