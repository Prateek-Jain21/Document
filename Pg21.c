/*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43


Write a C program to find maximum and minimum among n integer number.
*/
#include<stdio.h>
int main()
{   int a,i,max,n,min;
   printf("Enter N - Total No Of Integers? \n");
   scanf("%d",&n);
   printf("Enter 1 Number? \n");
   scanf("%d",&a);
   max = a;
   min = a;
   for(i=2;i<=n;i++)
   { printf("Enter %d Number? \n",i);
     scanf("%d",&a);
     if(max<a)
     {
        max = a;
     } 
     else if (a<min)
     {
        min = a;
   
     }
   }
   printf("Maximun = %d \n",max);
   printf("Minimum = %d \n",min);
}
