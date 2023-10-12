#include<stdio.h>
int main()
{
    int n,i,s=0,e,t;
    char c;
    printf("Enter The Number of total balls? \n");
    scanf("%d",&n);
    char a[n];
    e=n-1;
    for(i=0;i<n;i++)
    {
        printf("Enter The %d th Element? \n",(i+1));
        getchar();
        scanf("%c",&a[i]);
        

    }
    for(i=0;i<n;i++)
    {
        if(a[i]=='R')
        {
           t = a[i];
            a[i]  = a[s];
            a[s] = t;
            s++;
        }
        if(a[i]=='B')
        {
            t = a[i];
            a[i]  = a[e];
            a[e] = t;
            e--;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]=='G')
        {
            t = a[i];
            a[i]  = a[s];
            a[s] = t;
            s++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
}
