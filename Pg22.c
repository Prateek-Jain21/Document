/*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43

Write a program to print following series: 
0 3 8 15 24 35 48 .... Upto n term.
*/
#include<stdio.h>
int main()
{  
   int n,i;
   printf("Enter N Limit \n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   printf("%d \t",((i*i)-1));
}