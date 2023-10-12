#include<stdio.h>
int main()
{ int i,j,n,d,s=0;
  printf("Enter The limit? \n");
  scanf("%d",&n);
    for(i=1;i<=n;i++)
    {    
      d = 0;
      for(j=1;j<=i;j++)
  {
      d+=j;
    
  }
      s+=d;
    }
    printf("Sum = %d \n",s);
    return 0;
}
