/*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43
  
  
  Write a C program to find factors of a number 
  and check whether number is perfect or not.
*/
#include<stdio.h>
int main()
{   int a,i,sum=0;
    printf("Enter The Number? \n");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        sum+=i;
    }
    if(sum==a)
    printf("Perfect Number \n");
    else
    printf("Not Perfect Number \n");
    return 0;
}