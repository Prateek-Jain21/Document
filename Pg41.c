#include<stdio.h>
void replace(int a[],int n );
int main()
{ 
    int i,n;
    printf("Enter The Length Of Array? \n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element at %d : ",(i+1));
        scanf("%d",&a[i]);
    }
    replace(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
}
void replace(int a[],int n )
{   int i;
    for(i=0;i<n;i++)
    {
        a[i] = (a[i]*a[i]);
    }
}