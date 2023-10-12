#include<stdio.h>
int main()
{ 
int i,j,n,f;
double s = 0;
  printf("Enter The limit? \n");
  scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   f = 1;
        for(j=1;j<=i;j++)  
      {
        f*=j;
      }
      s = s+((double)i/f);
    }
    printf("Sum = %f \n",s);
    return 0;
}