/*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43


Write a C program to input n integer numbers 
from user and print reverse of each number.

*/



#include<stdio.h>  
 int main()    
{   
int a, rev , rem , n , i;
printf("Enter the lmit? \n");
scanf("%d",&n);   
for(i=1;i<=n;i++)
  { rev = 0;
  printf("Enter %d number: \n",i);    
  scanf("%d", &a);    
  while(a!=0)    
  {    
     rem=a%10;    
     rev=(rev*10)+rem;    
     a/=10;    
  }    
  printf("Reversed number: %d \n",rev);    
  }

return 0;  
}   