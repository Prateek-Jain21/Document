#include<stdio.h>
void sort(int a[],int n );
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
    sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
}
void sort(int a[],int n )
{   int i,t,j;
    for(i=0;i<n;i++)
    {  
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t = a[j+1];
                a[j+1] = a[j];
                a[j] = t;
            }
        }
    }
}