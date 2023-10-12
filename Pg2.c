#include<stdio.h>
int main()
{ int i,j,n;
  printf("Enter The limit? \n");
  scanf("%d",&n);
   char ch = 'A';
    for(i=1;i<=n;i++)
    { for(j=1;j<=i;j++)
     {
        printf("%c \t",ch++);

    
}
printf("\n");
    }
    return 0;
}
