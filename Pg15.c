#include<stdio.h>
int main()
{   int i,j,k,l;
    for(i=1;i<=5;i++)
    {   for(k=5;k>i;k--)
        {
            printf(" ");
         }
        for(j=1;j<=i;j++)
        {
            if(i==5||j==1||j==(2*i-1) )
            printf("*");
            else
            printf(" ");
        }
        for(k=1;k<i;k++)
        {   if(i<5)
            printf(" ");
         }
        for(l=1;l<i+1;l++)
        {
            if(i==5||l==1)
            printf("*");
            else
            printf(" ");
            
            }
        printf("\n");
    }
}