/*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO : 43
*/
  Write a recursive code to print gcd of 2 numbers.
#include<stdio.h>

int gcd(int a,int b);
int main()
{   int a,b,g;
    printf("Enter Two Numbers? \n");
    scanf("%d%d",&a,&b);
    g = gcd(a,b);
    printf("GCD Of The Numbers = %d",g);
}
int gcd(int a,int b)
{
    if (b>0)
        return gcd(b, a % b);
    else
        return a;
}