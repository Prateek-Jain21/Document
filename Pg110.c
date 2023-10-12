#include<stdio.h>
int fact(int n)
{
    if(n<2)
    return 1;
    else
    return (n*fact(n-1));
}
int main()
{
    int n;
    printf("Enter the number you want to find the factorial? \n");
    scanf("%d",&n);
    printf("Factorial Of Given No. = %d \n",fact(n));
}
