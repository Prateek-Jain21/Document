#include<stdio.h>
int main()
{
    int a,b=0,m,t,i;
    printf("Enter the number of Terms in Array? \n");
    scanf("%d",&a);
    m = a/2;
    int n[a];
    for(i=0;i<a;i++)
    {
        printf("Enter The Value At %d Position : " ,(i+1));
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        if(n[i]<0)
        {
          t = n[i];
          n[i] = n[b];
          n[b++] = t;
        }
    }
    for(i=0;i<a;i++)
    {
        if(n[i]==0)
        {
          t = n[i];
          n[i] = n[b];
          n[b++] = t;
        }
    }
    for(i=0;i<a;i++)
    {
        if(n[i]>0)
        {
          t = n[i];
          n[i] = n[b];
          n[b++] = t;
        }
    }
    for(i=0;i<a;i++)
        {
            printf("%d \n",n[i]);
        }
    }
