/*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO : 43

Write a program in C to calculate the 
sum of numbers from 1 to n using recursion.*/
#include<stdio.h>
int sum(int a);
int main()
{   int a,s;
    printf("Enter The Limit? \n");
    scanf("%d",&a);
    s = sum(a);
    printf("Sum Of The Numbers = %d \n",s);
}
int sum(int a)
{   
    if (a>0)
        return a + sum(a-=1);
    else
        return a;
}