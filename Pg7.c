#include<stdio.h>
int main()
{ int i,j,n,d;
double s = 0;
  printf("Enter The limit? \n");
  scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {   
      s= s+(1.0/i);
    }
    printf("Sum = %f \n",s);
    return 0;
}