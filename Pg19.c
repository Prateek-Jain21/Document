/*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43
   


Write a program to print following pattern:
*        * 
**      ** 
***    *** 
****  **** 
**********
*/

#include<stdio.h>
int main()
{ int i,j,n,k;
  printf("Enter The limit? \n");
  scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         for(j=1;j<=i;j++)
    {
        printf("*");
    
}
          for(k=1;k<(n*2);k++)
          { if((i*2+k)<=(n*2))
            printf(" ");

          }
         for(j=1;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
    
    }
    return 0;
}
