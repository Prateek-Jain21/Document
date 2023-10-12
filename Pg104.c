//write a c program to merge two sorted arrays 
#include<stdio.h>

int main()
{
    int n,m,i=0,j=0,k=0,min;
    printf("Enter The Length Of Two Arrays Respectiely? \n");
    scanf("%d%d",&n,&m);
    int a[n];
    int b[m];
    int c[n+m];
    printf("Enter the values of First array? \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the values of Second array? \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(k=0;k<(n+m);k++)
    {
    min = a[k];
    for(;i<n;)
    if(min>a[i])
    {
    min = a[i];
    a[i++] = 0;
    }
    fo
    if(min>b[j])
    {
        min  = b[j];
        b[j++] = 0;
    }
    c[k++] = min;
    }

printf("New Array! \n");
for(i=0;i<(n+m);i++)
{
    printf("%d \n",c[i]);
}
}
