#include<stdio.h>
int main()
{
    int i,t,j,n;
    printf("Enter the number of elements you want in array? \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of Array? \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<n-1;i++)
   {
    for(j=0;j<n-i-1;j++)
    {
     if(a[j]>a[(j+1)])
     {
        t = a[j];
        a[j]=a[(j+1)];
        a[(j+1)] = t;

     }
    }
   }
    printf("The Fourth Maximum Number = %d \n",a[n-4]);
     printf("The Fourth Minimum Number = %d \n",a[3]);
    
}