#include<stdio.h>
int main()
{ 
int i,j,n,f;
int s = 0;
  printf("Enter The limit? \n");
  scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   if(i%2!=0)
       s+=(i*i);
       else
       s+=(-1*i*i);
        
}
printf("Sum = %d \n",s);
}