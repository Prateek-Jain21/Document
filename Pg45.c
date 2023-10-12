#include<stdio.h>
void rev(int a[],int n );
int main()
{ 
    int i,n,j;
    printf("Enter The Length Of Array? \n");
    scanf("%d",&n);
    printf("Enter The Index Till Which you want to replace?");
    scanf("%d",&j);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element at %d : ",(i+1));
        scanf("%d",&a[i]);
    }
    rev(a,j);
    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
}
void rev(int a[],int n )
{   int i,t,j=(n-1);
    for(i=0;i<=n/2;i++)
    {   t = a[i];
        a[i] = a[j];
        a[j] = t;
        j--;

    }
    }
