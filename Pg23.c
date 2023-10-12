/*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43



Write a program to print all the prime numbers between the range m and n.
*/
#include<stdio.h>
int main()
{  
   int m,n,i,c,j;
   printf("Enter Range M and N  \n");
   scanf("%d%d",&m,&n);
   for(i=m;i<=n;i++)
   { c=0;
    for(j=2;j<i;j++)
    if(i%j==0)
    c++;

  
  if(c==0)
  printf("%d \t",i);
   }
}