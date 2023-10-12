/*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43

 Write a user defined function to print Fibonacci series.
 */
#include<stdio.h>
void Fib(int n);
int main() 
{ 
  int n,i,j,k;
  printf("Enter The Length of Fibonacci Series \n");
  scanf("%d",&n);
  Fib(n); 
}
void Fib(int n)
{   int t1,t2,t3=0,i;
    t1=0;
    t2=1;
    printf("%d, ",t1);
    for (i = 2; i <= n; i++)
   {
    t1 = t2;
    t2 = t3;
    t3 = t1 + t2;
    printf("%d, ",t3);
   }

}
