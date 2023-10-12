/*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43



Write a C program to find sum of following series: 
1 + 1/3! + 1/5! + 1/7! + ................. 1/n!
*/


#include<stdio.h>
int main()
{  
   int n,i,j;
   float s=0,f;
   printf("Enter N Limit \n");
   scanf("%d",&n);
   for(i=1;i<=n;i=i+2)
   { 
   f=1;
   for(j=1;j<=i;j++)
   {
    f=f*j;
   }
   s=s+(1.0/f);
   }
   printf("%f \n",s);
}